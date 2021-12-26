#include<stdio.h>
#include<string.h>
int main(){
	int f(int n); 
	int n;//某个数
	scanf("%d",&n);
	printf("%d",f(n)); 
	
	return 0;
} 
int f(int n){
	int flag=0;
	int i=0,j=0;
	int a[100];
	char num[100][100]; 
	//将1~n的数字赋给数组a 
	for(i=0;i<n;i++){
		a[i]=i+1;
	}
	//将每个数字进行分解分别存入数组当中
	 for(i=0;i<n;i++){
	 	j=0;
	 	while(a[i]>0){
	 		num[i][j]=a[i]%10;
	 		a[i]=a[i]/10;
	 		j++;
		 } 
	 }
	 //遍历二维数组中的一维数组，查找是否有1
	 for(int k=0;k<n;k++){
	 	for(int p=0;p<strlen(num[k]);p++){
	 		if(num[k][p]==1){
	 			flag++;
	 			break;
			 }
		 }
	 }
	 return (flag+1);

}
