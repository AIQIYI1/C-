//������� 
//������A�ĳ���Ϊm������B�ĳ���Ϊn����A��B�������ĳ���Ϊm+n-1�� 
//����������������Ϊ�������̵�ȷ��Ϊ������ 

#include<stdio.h>
int main(){
	void product(int a[],int b[],int m,int n);
	int a[100],b[100],i=0,m,n;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	product(a,b,m,n);
	return 0;
} 
void product(int a[],int b[],int m,int n){
	int i=0,j=0;
	int sum=0;
	for(i=0;i<m+n-1;i++){//i�ڼ��������
	sum=0; 
		if(i>=m) j=m-1;
		else j=i;//jΪ�����еĵڼ���������ļ�����i��Խ����֮�󣩶�Ϊm-1�� 
		for(;j>=0&&i-j<=n;j--){ //������ ���к����ж��� ��Ӧ����ȡ����ֵ�����������У����ݵ��±겻�� 
			sum+=a[j]*b[i-j];
		}	
		printf("%d ",sum);	
}

}
