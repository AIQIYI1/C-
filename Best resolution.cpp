//最佳分辨率——根据长宽比例进行推荐，在结果相似的情况下，选择分辨率高的 
//只考虑了长宽比例，比例相同则选择高的 
 #include<stdio.h>
 int main(){
 char ress[14][10];
 int a,b,flag=0; 
 float m,n,ratio[15],err[15];//分别记录允许的分辨率的长宽比，以及误差 
 char ch;
 int i=0,j=0;
while(scanf("%s",ress[i])!=EOF){
		i++;
	}
	//现在计算每个分辨率的长宽之比 //首先获取其中的数字然后进行处理 
 for(i=0;i<14;i++){
 	sscanf(ress[i],"%f*%f",&m,&n);
 	ratio[i]=m/n;
// 	printf("%f %f %f\n",m,n,ratio[i]);
 }
 printf("please enter the lenth and width of the screen\n");
 scanf("%d%d",&a,&b);
 
 float min=1;
 for(i=0;i<14;i++){
 	err[i]=(ratio[i]-a/b)>0?(ratio[i]-a/b):(a/b-ratio[i]);
 	if(err[i]<min){
 		min=err[i];
 		flag=i;
	 } 
	
 	if(err[i]==min) min=min;
 	
 //	printf("%f\n",err[i]);
 }
	printf("选中的最佳分辨率为%s\n",ress[flag]);
 	return 0;
 } 
