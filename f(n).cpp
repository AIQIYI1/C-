#include<stdio.h>
#include<string.h>
int main(){
	int f(int n); 
	int n;//ĳ����
	scanf("%d",&n);
	printf("%d",f(n)); 
	
	return 0;
} 
int f(int n){
	int flag=0;
	int i=0,j=0;
	int a[100];
	char num[100][100]; 
	//��1~n�����ָ�������a 
	for(i=0;i<n;i++){
		a[i]=i+1;
	}
	//��ÿ�����ֽ��зֽ�ֱ�������鵱��
	 for(i=0;i<n;i++){
	 	j=0;
	 	while(a[i]>0){
	 		num[i][j]=a[i]%10;
	 		a[i]=a[i]/10;
	 		j++;
		 } 
	 }
	 //������ά�����е�һά���飬�����Ƿ���1
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
