//��ѷֱ��ʡ������ݳ�����������Ƽ����ڽ�����Ƶ�����£�ѡ��ֱ��ʸߵ� 
//ֻ�����˳��������������ͬ��ѡ��ߵ� 
 #include<stdio.h>
 int main(){
 char ress[14][10];
 int a,b,flag=0; 
 float m,n,ratio[15],err[15];//�ֱ��¼����ķֱ��ʵĳ���ȣ��Լ���� 
 char ch;
 int i=0,j=0;
while(scanf("%s",ress[i])!=EOF){
		i++;
	}
	//���ڼ���ÿ���ֱ��ʵĳ���֮�� //���Ȼ�ȡ���е�����Ȼ����д��� 
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
	printf("ѡ�е���ѷֱ���Ϊ%s\n",ress[flag]);
 	return 0;
 } 
