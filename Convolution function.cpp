//卷积运算 
//若序列A的长度为m，序列B的长度为n，则A与B卷积结果的长度为m+n-1。 
//（将长的数组锁定为列数，短的确定为行数） 

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
	for(i=0;i<m+n-1;i++){//i第几个卷积和
	sum=0; 
		if(i>=m) j=m-1;
		else j=i;//j为长数列的第几个，后面的几个（i超越行数之后）都为m-1， 
		for(;j>=0&&i-j<=n;j--){ //条件是 在行和列中都有 相应的能取到的值，遍历过程中，横纵的下标不变 
			sum+=a[j]*b[i-j];
		}	
		printf("%d ",sum);	
}

}
