#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
int main(){
	int a,b,c,d,e,m,x,i,p,q;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	while(b!=0||c!=0||d!=0||e!=0||a!=0){

	if(b-a==c-b&&c-b==d-c&&d-c==e-d){
		printf("case one\n");
		m=b-a;
		for(i=0;i<=4;i++){
		e=e+m;	
	if(i==4){
		printf("%d\n",e);
	}	
	 else {
	 	printf("%d ",e);
	 }
		}
		if(a*b*c*d*e!=0&&b/a==c/b&&c/b==d/c&&d/c==e/d){
		printf("case two\n");
		m=b/a;
		for(i=0;i<=4;i++){
			e=e*m;
			if(i<4){
				printf("%d ",e);
			}else {
				printf("%d\n",e);
			}
		}
		
	}

}	else if(a*b*c*d*e!=0&&b/a==c/b&&c/b==d/c&&d/c==e/d){
		printf("case two\n");
		m=b/a;
		for(i=0;i<=4;i++){
			e=e*m;
			if(i==4){
			printf("%d\n",e);
		}else {
			printf("%d ",e);
		}
		}
	
	
	}else if(a+b==c&&b+c==d&&c+d==e){
		printf("case three\n");
		for(i=0;i<=4;i++){
			x=e+d;
			d=e+x;
			e=x+d;
			p=e+d;
			q=p+e;
			printf("%d %d %d %d %d\n",x,d,e,p,q);
			break;
		
		}

		}
			scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	}
	return 0;
}
*/
/*
int main(){
int a=0,b=0;
while(++a>0);
	printf("int �������ݵ������Ϊ%d\n",a-1);
while((a-1)/10!=0){
	b++;
}
printf("��λΪ%d\n",b);

	return 0;
} 
*/
/*
int main(){
	char c=-1;
	int i=-1;
	printf("c=%u,i=%u\n",c,i);
	return 0;
}*/


/*�ж�ֱ�������� 
int main(){
	int n,a,b,c,max,min,minn;
	
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d",&a,&b,&c);
		if(a>b&&b>c){
			max=a;
			min=b;
			minn=c;
		}else if(b>a&&a>c){
			max=b;
			min=a;
			minn=c;
		}else if(c>b&&b>a){
			max=c;
			min=b;
			minn=a;
		}
		if(max*max==min*min+minn*minn){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	} 
	
	return 0;
}
*/


//ˮ�ɻ��� 
/* 
int main(){
	int x,m,n,a,b,c,i,count=0;
	scanf("%d",&x);
	while(x--){
	scanf("%d%d",&m,&n);
	
	for(i=m;i<=n;i++){
		a=i%10;
		b=(i/10)%10;
		c=i/100;
		if(a*a*a+b*b*b+c*c*c==i){
			printf("%d ",i);
			count++;
		}
	}
	if(count==0){
		printf("-1\n");
	} //����Ӧ�÷���whileѭ���ڣ�forѭ���� 
}
//if(count==0){
//	printf("-1\n");
//}if ������ߵ�ʱ���Ǹ��������������жϵģ�����һ��������ˮ�ɻ������������-1 
	return 0;
} 
*/


//��ż���ֽ�Ϊ����������֮��
/* 
int main(){
	int x,a=3,b=3,m=1,n=2,p=1,i=2;
	
	scanf("%d",&x);
	if(x<=6||x%2!=0){
		printf("ERROR\n");
	}
	else{
		while(a<=(x/2)){
			for(i=2,m=1;i<a;i++){
				if(a%i==0){
					m=0;
						break;//break ����if����Ƿ�����������ʱ����ѭ�����������if��for���棬������ѭ��ֻ�����һ�Σ����������е�i���ᱻ�õ� 
				}
			
			
			}
				b=x-a;
			for(n=2,p=1;n<b;n++){
				if(b%n==0){
				p=0;
				break;
				}
				
			}
			
			if(m*p!=0){
				printf("%d %d\n",a,b);
			}
				a++;
		}	
		}
	
	return 0;
}

*/
//4����������
//!!!��ӡ��������ĸ�Ĵ�С��Ӧ��ϵ����д�Ĵ����н��������йأ�����a�Ľ���������࣬��ÿ�����������������Ҫ���н�����˵������a�����ֵ���������ƣ����Եõ���С˳�� 
/* 
int main(){
	int n,i;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		int a,b,c,d,t;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(a<=b){
			t=a;
			a=b;
			b=t;			
		}
		if(c<=b){
			t=c;
			c=b;
			b=t;
		}
		if(a<=c){
			t=a;
			a=c;
			c=t;
		}
		if(d<=b){
			t=d;
			d=b;
			b=t;
		}
		
		if(a<=d){
			t=a;
			a=d;
			d=t;
		}
		if(c<=d){
			t=c;
			c=d;
			d=t;
		}
		printf("%d %d %d %d\n",b,d,c,a);
	}

	return 0;
}
*/
/*
int main(){
	int n,x,i;
	float sum=0;
	scanf("%d ",&n);
	i=n;
	while(n--){
		scanf("%d",&x);
		sum+=x;
	}
	printf("%.2f",sum/i);
	return 0;
	
} 
*/
/*
int main(){
	int n,i,m=0;
	float sum=0;
	char a=0;
	scanf("%d",&n);
	i=n;
	while(n--){
		scanf("%d",&a);
		if(a<100){
			sum+=a;
		}
		else if(a>100){
			m++;
		}
	}
	printf("%.2f",sum/(i-m));
	return 0;
}
*/
//int main(){
/*	int i,n;
	char s[100][20];
	scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%s",s[i]);

int x,i;
int count[10];

for(i=0;i<10;i++){
	count[x]++;
}
scanf("%d",&x);
while(x!=-1){
	if(x>=0&&x<=9){
		count[x]++;
	}
	scanf("%d",&x);
}
for(i=0;i<10;i++){
	printf("%d:%d\n",i,count[i]);
}
	return 0;
}

*/
//ѭ����������
/* 
int main(){
	int length,n,N,m;
	char a[1111]={'\0'},n1[1111]={'\0'};
	scanf("%d",&m);
	
	scanf(" ");
	
	gets(a);
	
	N=strlen(a);
	
	int t=N-m;
	strcpy(n1,a+t);
	strcpy(n1+m,a);
	for(int temp=N;temp<N+m;temp++){
		n1[temp]='\0';
	}
	
	puts(n1);
	
	return 0;
} 
//1.strlenҪʶ��ո񣬿ո񲻵���\0;
2.scanf��������յ��س�����gets�ͻ�õ���ֱ�ӽ�������3.����˼·�������ַ�������֮���Ȱ�Ҫǰ�Ƶ�����ǰ�ߣ�
����+n����ʽ���ٽ��ַ���������һ���ַ���+m���棬��� 
*/


//������
/*
int main(){
	int n,a,i;
	scanf("%d",&n);
	scanf(" ");
	char str1[100],str2[100];

	while(n--){
		gets(str1);
		a=strlen(str1);
		
		for(i=0;i<a;i++){
			str2[a-1-i]=str1[i];
		}
		
		if(strcmp(str1,str2)==0){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
} 
*/
//��ӡ100-1000�Ļ�����
/* 
int main(){
	int i,num,tempt=1,sum=0;
	for(num=101;num<1000;num++){
		tempt=num; 
		sum=0;

		while(tempt!=0){
		//	tempt=num%10;
		//	num1=num/10;
		//	num=num1;
		//	sum=sum*10+tempt;����Ϊ0��ʱ��֪����ô���� 
		//�Ľ�Ϊ����������������һ��������ʾ��ֱ����ʽ���б�ʾ���ɣ�
		sum=sum*10+tempt%10;
		tempt=tempt/10; 
		}
		if(sum==num){
			printf("%dΪ������\n",sum);
		}
	}
	return 0;
} 

//ע��һ��Ҫ��tempt��sum��ֵ��һ��ѭ���Ժ���ȥ����Ȼ�������� 
*/
/*
int main(){
	char n,m,i,j,count;
	scanf("%d",&n);
	char str1[30];
	gets(str1);
	n=(strlen(str1)+1);//�õ����ֵĸ��� 
	
	for(i=0;i<n;i+=2){
		m=0;
		for(j=i+2;j<n;j+=2){

		m+=(str1[i]==str1[j]); 
		}
    if(m==0){
    	count++;
	}
	} 
printf("%d",count);
	 
	return 0;
}
*/


//�����ַ������Ƿ�ĳЩ�ַ��� 
/*
int main(){
	char str[100],n;
	scanf("%d",&n);
	char lenth,a,num;
	scanf(" ");
	while(n--){
		num=0; 

		gets(str);
		lenth=strlen(str);
		if(lenth%2==0){
			printf("NO\n");
		}
		if(lenth%2!=0){
			switch(lenth==3){
					case 1:
			if(str[(lenth-3)/2]=='S'&&str[(lenth-1)/2]=='C'&&str[(lenth+1)/2]=='U'){
				num=1;
				break; 
			}
			case 0:
			if(str[(lenth-3)/2]=='S'&&str[(lenth-1)/2]=='C'&&str[(lenth+1)/2]=='U'){
				for(char i=0;i<(lenth-1)/2;i++){
					if(str[i]==str[lenth-i]&&str[i]=='A'){
						num=1;
						break;
					}
				} 
			}
		
			}
				if(num==1){
			printf("YES\n");
		}
		else 
		printf("NO\n");
		}
	
	} 
	return 0;
}
*/
//�жϲ�ͬԪ�صĸ�����
/* 
int main(){
	int a,b,n;
	char str1[30];
	scanf("%d",&n);

	a=n;
	for(b=0;b<n;b++){
	scanf("%d",&str1[b]);	
	}

	for(int i=0;i<a;i++){
		for(int j=i+1;j<a;j++){
			if(str1[i]==str1[j]){
				n--;
				break;
			}
		}
	}
	printf("%d",n);
	
	return 0;
}
*/

 /*
int main(){
	int a[32],b[32],n,m,max,x=0,t;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		a[i]=m;
		if(m<0){
			b[i]=-m;
		}
		else
		b[i]=m;
		
	}
	max=b[0];
	for(int i=0;i<n;i++){
		if(max<b[i]){//��max������b[i]
    	max=b[i];
    	x=i;
			
		}
	}
	printf("%d",a[x]);
	return 0;
}

*/

/*�ַ������� 
int main(){
	char str1[30];
	gets(str1);
	printf("%d",strlen(str1));
} */

/*
int main(){
	char str1[100],str2[100],str3[100];
	char i,n,j=0,k=0,t,q;
	
	scanf("%d",&n);
	scanf(" ");
	while(n--){
	gets(str1);
	for(i=0;i<strlen(str1);i++){
	
	if(str1[i]!=0&&str1[i]!=' '){
		while(i<strlen(str1)){
			str2[j]=str1[i];
			j++;
			break;
		}
	}
	if(str1[i]==0&&str1[i]!=' '){
		while(k<n){
			str2[k]=str1[i];
			k++;
			break;
		}
	}
}
	for(j=0;j<strlen(str2);j++){
		if(str2[j]<str2[j+1]){
			t=str2[j];
			str2[j]=str2[j+1];
			str2[j+1]=t;
		}
	}
	for(k=0;k<strlen(str2);k++){
		if(str2[k]<str2[k+1]){
			q=str2[k];
			str2[k]=str2[k+1];
			str2[k+1]=q;
		}
	}
	strcat(str1,str2);
	for(int b=0;b<n;b++){
		printf("%d ",str1[b]);
	}
	}

	
	return 0;
}
 */
 /*
int main(){
	int m,n,a[100],b[100];
	int k=0,c=0,q;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&n);
		q=n-1;
		k=0;
		for(int j=0;j<n;j++){
			scanf("%d",&a[j]);//��ֵ 
		}
		for(int c=0;c<n;c++){
			if(a[c]!=0){
					b[k]=a[c];
					k++;			
			}
			else if(a[c]==0)
			{
					b[q]=a[c];
					q--;				
				}
			}
		
		for(int p=0;p<n;p++){
			printf("%d ",b[p]);
		} 
}
	return 0;
}
*/
/* 
int main(){
	int isprime(int a);
	int b,m,n,x,count=0;
	scanf("%d",&m);
    while(m--){
		scanf("%d",&x);
		scanf("%d",&n);
		x=x+1;
	   while(count<n){
	   	if(isprime(x)==0){
	   		printf("%d ",x);
	   		count++;
		   }
		   x++;
	   }
	   count=0;
	   	}
	   	printf("\n");
	return 0;	
	}	

int isprime(int a){
	int b=0;
	for(int i=2;i<a;i++){
		if(a%i==0){
			b=1;
			break;
		}
	}
	return b;
}
*/

/*
int main()
{
	int a[5][5];
	int n,sum;
	scanf("%d",&n);
	for(int k=0;k<n;k++){
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int m=0;m<5;m++){
		sum+=a[m][m]+a[m][4-m];
	}
	printf("%d",sum-a[2][2]);
	}
	return 0;
}
*/
/*
int main(){
	int m,n,t,s=0;
	int a[1000];
	int b[1000];
	scanf("%d",&m);
	while(m--){
		s=0;//!s=0
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}//��ֵ
		for(int j=0;j<n;j++){
			for(int k=j+1;k<n;k++){
				if(a[j]>a[k]){
					t=a[j];
					a[j]=a[k];
					a[k]=t;
				}
			}
		}
	/*	for(int p=0;p<n;p++){
			printf("%d ",a[p]);*/
/*			for(int q=0;q<n;q++){
				if(a[q]!=a[q+1]){
					b[s]=a[q];
					s++;
				}
			}
			for(int c=0;c<s;c++){
				printf("%d ",b[c]);
			}
			printf("\n");
		} 
	return 0;
}
*/

//�׳ˣ�
/*
int main(){
	int f(int n);
	int mod(int x);
	int a,n,m;
	long long y=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		y=0;
		for(int j=1;j<=m;j++){
			y+=f(j);
		}
//printf("%d",f(n));	
	
	printf("%d\n",mod(y));
}
	return 0;
} 
int f(int n){
	int y;
	if(n==1){
		y=1; 
	}
	else if(n>1){
		y=n*f(n-1);
	}
	return y;
}
int mod(int x){
	int y;
	y=x%1000000;
	return y;
}
*/

//int main(){
//	int n,i,j,tempt;
//	int p=1;
//	int a[10000];
//		a[1]=1;
//		scanf("%d",&n);
//	while(n!=EOF){
//		
//		//P��ʾλ�����տ�ʼֻ��1λa[1]��a[1] = 1,����Ϊ0,0���κ���Ϊ0 
//		int one=0;//one��ʾ��λ�����տ�ʼ��λΪ�㣻
//		int i,j;
//		//������
//		int s=1;
//		for(i=2;i<n;i++)
//		s*=i;
//		printf("%d\n",s);
//		for(i=2;i<n;i++){
//			for(j=1;j<=p;j++){
//	 tempt=a[i]*i+one;//tempt��ʾ�����ʽ�λ��ֵ
//			one=tempt/10;
//			a[j]=tempt%10; 
//		} 
//		while(one){
//			a[j]=one%10;
//			one=one/10;
//			j++;
//		}				
//			}
//		
//		p=j-1;
//	}
//	for(i=p;i>=1;i--)
//	printf("%d",a[i]);
//	return 0;
//}

//ƽ����
/* 
int main(){
	int a,n;
	float sqrt,wu,left=0,right;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	
	scanf("%d",&a);
	right=a;
	if(a<0){
		printf("ERROR\n");
	}
	else if(a==0){
		printf("0.00\n");
	}
	else if(a>0){
		sqrt=(left+right)/2;
		wu=sqrt*sqrt-a;
		while(wu>0.05||wu<-0.05){
			if(wu>0.05){
			left=left;
	    	right=sqrt;
	    }
		if(wu<-0.05){
			left=sqrt;
			right=right;
		}
			sqrt=(left+right)/2;
			wu=sqrt*sqrt-a;
		}
		printf("%.2f\n",sqrt);
	}
}
	return 0;
}
*/
//�ڶ�С����
/*
int main() {
	int n,a[100],m,t,h;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		h=0;
		for(int j=0;j<m;j++){
			scanf("%d",&a[j]);
		}
		for(int k=0;k<m;k++){
			for(int p=k+1;p<m;p++){
				if(a[k]>a[p]){
					t=a[k];
					a[k]=a[p];
					a[p]=t;
				}
			}
		}
	for(int q=0;q<m;q++){
		if(a[q]>a[0]){
			h=a[q];
			break;
		}
	}
	if(h==0)
	{
		printf("ERROR\n");
		}
		else printf("%d\n",h);
	}
	return 0;
}
*/

//�ֽ�������
/* 
int main(){
	int a,n;
	scanf("%d",&n);
	for(int j=0;j<n;j++){
		scanf("%d",&a);
	for(int i=2;i<a;i++){
		while(i!=a){
			if(a%i==0){
				printf("%d*",i);
				a=a/i;
			}
			else break;//��������ѭ������break�����ڲ�ѭ����ͬʱ����������һ��ѭ�� 
		}
	}
	printf("%d\n",a);
	}

	return 0;
} 
*/
/*
int main(){
	int n;
	int num[100],sym[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
		scanf("%c",&sym[i]);
	}
	int up,down,row;
	for(int j=0;j<n;j++){
		if(num[i]>0&&up<num[i]){
			up=num[i];
		}
		if(num[i]<0&&down>num[i]){
			down=num[i];
		}
		row=up-dowm+1;
	}
	for(int k=0;k<row;k++){
		for(int p=0;p<2n-1;p++){
			printf(' ')
		}
	}
	return 0;
}*/

//�ϲ���������
/* 
int main(){
	int m,n,t;
	char a[20],b[20];
	scanf("%d",&m);
	scanf("%d",&n);
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	for(int j=0;j<n;j++){
		scanf("%d",&b[j]);
	}
	for(int k=m,p=0;k<m+n&&p<n;k++){
		a[k]=b[p];
		p++;
	}
	for(int c=0;c<m+n;c++){
		for(int d=c+1;d<m+n;d++){
			if(a[c]>a[d]){
			t=a[c];
			a[c]=a[d];
			a[d]=t;	
			}
		}
	}
	for(int q=0;q<m+n;q++){
		printf("%d ",a[q]);
	}
	return 0;
}
*/

//��С����
//int main(){
//	int a[50],n=0,num=0,m=0,k=0,sum=0,f=10;//a����Ϊ������Ԫ�ص����飬nΪÿ�����ĸ�����numΪ������Ǹ��� 
//	while(f--){//�����ÿ�����ĸ�����ѭ�� 
//		scanf("%d",&n);
//		for(int i=0;i<n;i++){//i���ƶ��ٸ� num���Ž����飻 
//			a[i+sum]=num;//sum��¼��һ�ε��˶��ٱ�����һ�μ����洢 
//		}
//		sum+=n; 
//		num++;
//	}
////	for(int j=0;j<sum;j++){ȷ������洢����ȷ�ġ� 
////		printf("%d ",a[j]);
//int flag=0,t;//t�����ں��潻����flag�����ж��������Ƿ���0�� 
//for(int j=0;j<sum;j++){
//	if(a[j]==0) flag=1;
//} 
//if(flag==0){
//	for(int k=0;k<sum;k++){
//	printf("%d",a[k]);
//}
//	}
//	else{
//		for(int s=0;s<sum;s++){
//			if(a[s]!=0){
//				t=a[s];
//				a[s]=a[0];
//				a[0]=t;
//				break;
//			}
//		} 
//		for(int q=0;q<sum;q++){
//	printf("%d",a[q]);
//}
//	}
//	return 0;
//} 

//��������
//int  main(){
//void sort(int a[],int m);
//	int n=0,m=0,k=0,s=0;
//	int num[50],a[50],b[50];
//	scanf("%d",&n);
//	while(n--){
//		k=0,s=0;
//		scanf("%d",&m);
//		for(int i=0;i<m;i++){
//			scanf("%d",&num[i]); 
//		}//��ֵ 
//		num[m]=m;
//		sort(num,m+1);//����
////		for(int j=0;j<m;j++){
////			printf("%d",num[j]);
////		} 
//for(int j=0;j<m+1;j++){
//	if(num[j]%2!=0){
//		a[k]=num[j];
//		k++;
// }
// else{
// 	b[s]=num[j];
// 	s++;
// }
//}
// for(int c=0;c<k;c++){
// 	printf("%d ",a[c]);
// }
// for(int d=0;d<s;d++){
// 	printf("%d ",b[d]);0
// }
//
//
//	}
//	printf("\n");
//	return 0;
//}
//void sort(int a[],int m){
//	int t;
//	for(int i=0;i<m;i++){
//		for(int j=i+1;j<m;j++){
//			if(a[i]>a[j]){
//				t=a[i];
//				a[i]=a[j];
//				a[j]=t;
//			}
//		}
//	}
//}
//
//int main(){
//	int a[10][10],i;
//	int *p=a[10];
//	for(int i=0;i<10;i++){
//		scanf("%s",p+i);
//	}
//
//	return 0;
//}

//m���k������ 
//int main(){
//int	isPrime(int a);
//	int n=0,m=0,k=0,count=0;
//	scanf("%d",&n);
//	while(n--){
//		count=0;
//		scanf("%d%d",&m,&k);
//		for(int i=m+1;count<k;i++){
//			if(isPrime(i)==0){
//				printf("%d ",i);
//				count++;
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//} 
//int isPrime(int a){
//	int flag=0;
//	for(int j=2;j<=a/2;j++){
//		flag=0;
//		if(a%j==0){
//			flag=1;
//			break;
//		}
//	}
//	return flag;
//}

//int main(){
//	char a[7],n=0,m,count=0,flag=0;
////	scanf("%d",&n);
////	for(int i=10000;i<999999;i++){
//int i=10000;
//		while(i>0){
//		int j=0;
//		a[j]=i%10;
//		j++;
//		count++;
//		i=i/10;
//		}//�����ֱַ���������� 
//		for(int k=0;k<count;k++)
//		printf("%d",a[k]);
////		int sum=0;
////	for(int k=0;k<count;k++){
////	if(a[k]=a[count-k-1]){
////	sum+=a[k];
////		}
////	}//����õ���λ֮�� 
////	if(sum==n){
////		for(int s=0;s<count;s++){
////			printf("%d",a[s]);
////		}
////		flag=1; 
////	}
////	}
////	if(flag==0){
////		printf("-1");
////	}
////	return 0;
//} 

//#include <stdio.h>
//
//int main ()
//{
//	int a,b,c,d,e,f;
//	int flag=0;
//	int n;
//	scanf("%d",&n);
//	for(int i=10000;i<999999;i++)
//	{
//		if(i/100000==0)
//		{
//			a=i%10;
//		    b=((i-a)/10)%10;
//			c=((((i-a)/10)-b)/10)%10;
//			d=((((((i-a)/10)-b)/10)-c)/10)%10;
//			e=((((((((i-a)/10)-b)/10)-c)/10)-d)/10)%10;
//			int sum= a*10000+b*1000+c*100+d*10+e*1;
//			if(sum==i && a+b+c+d+e==n)
//			{
//		  		printf("%d\n",sum);
//		  		flag=1;
//    		}
//		}
//		else
//		{
//			a=i%10;
//			b=((i-a)/10)%10;
//			c=((((i-a)/10)-b)/10)%10;
//			d=((((((i-a)/10)-b)/10)-c)/10)%10;
//			e=((((((((i-a)/10)-b)/10)-c)/10)-d)/10)%10;
//			f=((((((((((i-a)/10)-b)/10)-c)/10)-d)/10)-e)/10)%10;
//			int sum= a*100000+b*10000+c*1000+d*100+e*10+f;
//			if(sum==i && a+b+c+d+e+f==n)
//			{
//		 		 printf("%d\n",sum);
//		  		flag=1;
//    		}
//		}
//	}   
//	if(flag==0)
//		printf("-1");
//		
//	return 0;
//}
//
//#include <stdio.h>
//
//#include <string.h>
//
//int main()
//{
//	int n, i=0;
//	char str[100][100];
//	char str3[100];
//	scanf("%d",&n);
//	
//	while(n--){
//	gets(str[i]);
//	scanf("\n");
//	i++;
//	}
//	for(int j=0;j<n;j++){
//	if(strcmp(str[j],str[j+1])>0) {
//	strcpy(str3,str[j]);
//	strcpy(str[j],str[j+1]);
//	strcpy(str[j+1],str3);
//	} 
//	}
//	for(int k=0;k<n;k++){
//		printf("%s",str[k]);
//	}
//	
// return 0; 
//
//}
//#include<stdlib.h>
//int main(){
//	struct Student{
//		char name[11];
//		char num[19];
//		char score[18];
//	}tempt1,tempt2,students[20];
//	int n,i;
//	char a[4]="n/a";
//	
//	scanf("%d",&n); 
//	for(i=0;i<n;i++){
//		scanf("%s %s %s",&students[i].name,&students[i].num,&students[i].score);
//	}
//	tempt1=students[0];
//	for(int j=0;j<n;j++){
//		if(strcmp(students[i].score,a)!=0) tempt2=students[2];
//		break;
//	}
//	for(int i=0;i<n;i++){
//		if(strcmp(students[i].score,a)!=0&&atoi(tempt1.score)<atoi(students[i].score)){
//			tempt1=students[i];
//		}
//		if(strcmp(students[i].score,a)!=0&&atoi(tempt1.score)==atoi(students[i].score)){
//			if(strcmp(tempt1.name,students[i].name)>0) tempt1=students[i];
//		}
//		
//		
//		if(strcmp(students[i].score,a)!=0&&atoi(tempt2.score)>atoi(students[i].score)){
//			tempt2=students[i];
//		}
//		if(strcmp(students[i].score,a)!=0&&atoi(tempt2.score)==atoi(students[i].score)){
//			if(strcmp(tempt2.name,students[i].name)<0) tempt2=students[i];
//		}
//	}
//	
//	printf("%s %s\n%s %s",tempt1.name,tempt1.num,tempt2.name,tempt2.num);
//	return 0;
//} 

 //����2 
 /*
int main(){
	struct infor{
		char name[10];
		char num[19];
		char score[4];
		char rank;
		
	}tempt,students[10];
	
	int n,i,p=0;
	char str[10];
	char a[4]="n/a";
	scanf("%d %s",&n,str);
	//������Ϣ 
	for(i=0;i<n;i++){
		scanf("%s %s %s",&students[i].name,&students[i].num,&students[i].score);
	}
//	for(i=0;i<n;i++){
//		if(strcmp(students[i].score,a)!=0){
//			tempt=students[i];
//			break;
//		}
		//������ĳ����Ч�ɼ���ѧ�� 
	//}
	//��ʼ���� 
	for(i=0;i<n;i++){
	students[i].rank=1;	
		for(int j=0;j<n;j++){
			if(atoi(students[i].score)<atoi(students[j].score)){
				students[i].rank++;
			}
	}
	}
//		for(int k=0;k<n;k++){ 
//		printf("%s %s %s %d\n",students[k].name,students[k].num,students[k].score,students[k].rank);
//	}
	//��ʼ���� 
	//����Ƿ��� 0&n/a
	if(atoi(str)<=100&&atoi(str)>0||atoi(str)==0&&strlen(str)==1||strcmp(str,a)==0){
	 if(atoi(str)<=100&&atoi(str)>0||atoi(str)==0&&strlen(str)==1){
	 			for(i=0;i<n;i++){
	 				if(atoi(str)==atoi(students[i].score)&&strcmp(students[i].score,a)!=0)
	 			printf("%s %s %s %d\n",students[i].name,students[i].num,students[i].score,students[i].rank);
			 } 
		 }
	 else if(strcmp(str,a)==0){
	 	for(i=0;i<n;i++){
	 		if(strcmp(students[i].score,a)==0){
	 			printf("%s %s %s n/a\n",students[i].name,students[i].num,students[i].score);
			 } 
		 }
	 } 
}
	 //ģ������ 
	 else{
	for(int k=0;k<n;k++){ //������ĳ���˵���Ϣ 
	if(strstr(students[k].name,str)!=0||strstr(students[k].num,str)!=0){
	//	printf("null");
		printf("%s %s %s %d\n",students[k].name,students[k].num,students[k].score,students[k].rank);
	}
  }
}
	return 0;
}
*/
//����Ч���ƽ���� 
//int main(){
//	char num[100][100];
//	int n,flag=0,count=0;
//	float sum;
//	scanf("%d",&n);//n������
//	
//	for(int i=0;i<n;i++){
//		scanf("%s",num[i]);
//	}//fuzhi 
//	
//	for(int j=0;j<n;j++){
//		sum+=atoi(num[j]);
//		if(strcmp(num[j],"n/a")!=0) {
//			flag=1;
//			count++;
//		}
//	}
//	if(flag==0){
//		printf("n/a\n");
//	}
//	else
//	printf("%.2f",sum/count);
//	return 0;
//}


//���ھ���
 //�������·�С��12��ʱ����ȫ�ԳƵ�ʱ��ֻ��һ���������ֱ��������� 
//һ����Ҫ���ǵ�һ�����ܲ������·ݣ�12Ϊ�ٽ�ֵ������һ���� 
/*
#include<stdio.h>
#include<string.h>
int main(){
	int runyear(int m);
	int max(int m,int n);
	int min(int m,int n);
	char*monthname[13]={"January", "February","March","April","May","June","July","August","September","October","November","December"};
	int days[13]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year=0,month=0,day=0,year1=0,month1=0,day1=0;
	char date[20];
	int past=0,past1=0;
	int m=0,sum=0,j=0;
	scanf("%s",date);
	sscanf(date,"%d/%d/%d",&year,&month,&day);//�ȿ���Ψһ����� ��������ʾ������ʾͬһ�죻ֻ���������ա�����һ��������12��
	//ֻ���������ꡪ���ڶ�����>12���ߵ�������>��Ӧ�·ݵĵ��������ߵڶ�������2����������29�����겻�����꣩ 
//	printf("%d %d %d",year,day,month);

//�����շ� 
	if(year>12||year==month&&month==day){
		printf("%s %d,%d",monthname[month-1],day,2000+year);//����Ҫ��Ҫ��*�����⣡�� 
	}
	
	//�����귨 
	else if(month>12||day>days[month-1]||month==2&&runyear(2000+year)!=1&&day==29){
	sscanf(date,"%d/%d/%d",&month1,&day1,&year1);
	printf("%s %d,%d",monthname[month1-1],day1,2000+year1);
}
//�ٿ������ֶ����Ե��������Ҫ�����������֮һ 
 else  if(month<12&&day<=days[month-1]||year<=12&&month<=days[month-1]){
 	sscanf(date,"%d/%d/%d",&month1,&day1,&year1);
 		int count=0;//���������֮���������Ŀ (�Ȳ�����ͷβ����)
	for(int i=min(year,year1)+1;i<max(year,year1);i++){
		if(runyear(2000+i)==1) count++;
	}
	sum=count*366+(max(year,year1)-min(year,year1)-1-count)*365; 
	//�ֱ�������ݷָ�ɹ�ȥ�ĺ�û��ȥ��������
	m=days[1];
	days[1]=days[1]+runyear(2000+year);
	for(j=0;j<month-1;j++){
		past+=days[j];
	} 
	past=past+day;
	days[1]=m+runyear(2000+year1);
	for(j=0;j<month1-1;j++){
		past1+=days[j];
	} 
	past1=past1+day1;
	//�Ƚ�������ݵ��Ⱥ�
	
	if (year>year1){
    sum=sum+365+runyear(2000+year)-past1+past;
	}
	else if (year<year1){
	sum=sum+365+runyear(2000+year1)-past+past1;
	}
	else if(year1=year) {
		sum=past-past1;
		if(sum>=0) sum=sum;
		else sum=-sum;
	}
		printf("%d",sum);
}
return 0;
}
int runyear(int m){
	int flag=0;
	if(m%400==0||m%4==0&&m%100!=0) flag=1;
	return flag;
}
int max(int m,int n){
	int max=m;
	if(n>m) max=n;
	return max;
}

int min(int m,int n){
	int min=m;
	if(n<m) min=n;
	return min;
}
*/

//��ֵ�˲�
//˼·�� �������� ��m��ʾ�˲���ȣ�n��ʾ���鳤��
//�����ų�ERROR��������ٽ��������������� m/2 �n-m/2 ��ʼ����sort���������滻 
//ע�ⲻ��ֱ����ԭ��������Ķ�����Ӱ�����������������һ��һ�������� 
 /*
int main(){
	int sort(int a[],int m);
	int m,n,i=0,j=0,k=0;
	int a[50],num[50],b[50];
	
	while(scanf("%d%d",&m,&n)!=EOF){
			for(i=0;i<n;i++){
				scanf("%d",&a[i]);
				b[i]=a[i]; 
			}
			if(m%2==0) printf("ERROR\n");
			else{
			for(i=m/2;i<n-m/2;i++){
				for(j=0,k=i-m/2;j<m&&k<=i+m/2;j++){
					num[j]=a[k];
					k++;
				}
			b[i]=sort(num,m);
			}
			for(i=0;i<n;i++){
				printf("%d ",b[i]);
			}
		}
	}
	return 0;
}
//�������� 
int sort(int a[],int m){
	int i=0,j=0,tempt=0,t;
	int b[20];
	for(i=0;i<m;i++){
		b[i]=a[i];
	}
	for(i=0;i<m;i++){
		for(j=i+1;j<m;j++){
			if(b[i]<b[j]){
				tempt=b[i];
				b[i]=b[j];
				b[j]=tempt; 
			}
		}
	}
	t=b[m/2];
	return t;
}*/


//#include<stdio.h>
//#include<string.h>
//int main(){
//char str[100];
//int m,i=0;
//gets(str);
//m=strlen(str);
//for(int i=0;i<m;i++){
//	if(str[i]<90&&str[i]>=65){
//	str[i]=155-str[i];
//}
//}
//puts(str);
//printf("\n");
//	return 0;
//}

//��״ͼ
//˼·���������ֺ��ַ��󣬵õ�����ͼ�����������������õ�������������ֵ����Ӻ���ټ�1�� 
//�Ƚ�����ͼ��ÿ��λ����Ϊ��* ��
//����������ֱ���д����õ� ���ԵĴ����ֺ��ַ������� 
/* 
#include<stdio.h>
int main()
{
	int m, i = 0, s[999], q = 0, c[999], d[999], e = 0, f = 0, h, g, max = 0, fumax = 0, zong, hang, lie;
	char ch[999], b = 0;
	scanf("%d", &m);
	char lan[50][50];

	for (i = 0; i < 999; i++) {
		ch[i] = '*';
	}
	int j = 0;
	for (i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			lan[i][j] = '*';
		}
	}
//�Ƚ�ͼ�����е�λ�ø���ʼ��Ϊ��*�� 
	for (i = 0; i < m; i++)
	{
		scanf(" %d%c", &s[i], &ch[i]);//�ֱ������������ֺ��ַ� 
		if (ch[i] == '\n')
			ch[i] = ' ';
		if (s[i] > 0)
		{
			c[e] = s[i];
			e++;
		}
		if (s[i] <= 0)
		{
			d[f] = -s[i];
			f++;
		}
	}
//�ֱ�õ���������Ҫ���ַ��ĵط� ����ʱ�õ���e�����������ַ������� 
	if (f != 0)
		fumax = d[0];
	if (f == 0)
		fumax = 0;
	for (h = 1; h < e; h++)
	{
		if (c[h] >= max)
			max = c[h];
	}
	for (g = 1; g < f; g++)
	{
		if (d[g] >= fumax)
			fumax = d[g];
	}
	//�õ��������� �ַ���߷� 

	zong = max + fumax + 1;
	for (lie = 0; lie < 2 * m - 1; lie++)
	{
		lan[max][lie] = '-';
	}
	//��ӡx�� 
	for (i = 0; i < m; i++)
	{
//lan�������Ǵ����������߷������п�ʼ�ģ�����������ʾ��ʱ���x������������ 
		if (ch[i] == ' ' && s[i] > 0)
		{
			for (hang = max - 1; hang >= max - s[i]; hang--)
				lan[hang][2 * i] = '+';
		}
		 //i*2��ż������Ӧ���������� 
		if (ch[i] == ' ' && s[i] < 0)
		{
			for (hang = max + 1; hang <= max - s[i]; hang++)
				lan[hang][2 * i] = '+';
		}
		if (ch[i] != ' ' && s[i] > 0)
		{
			for (hang = max - 1; hang >= max - s[i]; hang--)
				lan[hang][2 * i] = ch[i];
		}
		if (ch[i] != ' ' && s[i] < 0)
		{
			for (hang = max + 1; hang <= max - s[i]; hang++)
				lan[hang][2 * i] = ch[i];
		}
	}
	for (hang = 0; hang < zong; hang++)
	{
		for (lie = 0; lie < 2 * m - 1; lie++)
		{
			if (lan[hang][lie] == '*') {
				printf(" ");
			}
			else {
				printf("%c", lan[hang][lie]);
			}


		}
		printf("\n");
	}

	return 0;
}
*/
//A blockhouse is a small castle that has four openings through which to shoot.
/* 
int main(){
    void sort(char name[][100], int n);
    int i, count=0, j=0;
    char word[1000][100], str[1000];
    char *p;
    while(scanf("%s",str)!=EOF)//�����ַ���
    p=str;// ������ֵ�õ�ַ��ֵ��ָ��
    for(;*p!=0; p++){
        if(*p!=' ' && *p != ',' &&  *p != '.'){//�ָ��
            if(*p>='A'&& *p<='Z') //��д��Сд
               *p += 32;
            word[count][j++]=*p;
        }
        //�����ո񡢶��š����
        else{
            if(j!=0){
                word[count][j++]='\0';//���ʽ�����־
                count++;
                j=0;
            }
        }
    }
    //���ָ��ĵ�������
    sort(word,count);
    int sum = 1;
    for(i=0;i<count; i++){
        if(strcmp(word[i],word[i+1])== 0)
            sum++;
        else{
            printf("%s:%d\n", word[i],sum);
            sum = 1;
        }
         
    }
    return 0;
}
 
void sort(char name[][100], int n){
    char temp[100];
    int i, j, k;
    for(i=0; i<n-1; i++){
        k=i;
        for(j=i+1; j<n; j++){
            if(strcmp(name[k], name[j]) > 0) k=j;
        }
        if(k != i){
            strcpy(temp, name[i]);
            strcpy(name[i], name[k]);
            strcpy(name[k], temp);
        }
    }
 
}
*/
//�������
//˼·��������Ҫ�������n,k�η�����ά����A��ֵ�����и�ֵ��
//���Ҵ�����ͬ�Ķ�ά���� B������C���ں����м���� 
//
/*
int main(){
	int k,n;
	scanf("%d%d",&n,&k);
	int A[50][50],B[50][50],C[50][50];
	int i=0,j=0,sum=0,a=0,count=0;
	//��A���и�ֵ 
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&A[i][j]);
			B[i][j]=A[i][j];
		}
	} 
	//��ʼ���м���
	int b=k-1;
	while(b--){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				sum=0;
				a=0;
				while(a<n){
				sum+=A[i][a]*B[a][j];
				a++;
				}
				C[i][j]=sum;
			}
		}
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			B[i][j]=C[i][j]; 
		}
	}
	} 
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		printf("%d ",B[i][j]);
		count++;
		if(count%m==0){
			printf("\n");
		} 
		}
	}
	return 0;
} 
*/
//��ż������ 
//int main(){
//	int j=0,n=0,m=0,k=0,s=0,t=0;
//	int num[50],a[50],b[50];
//	scanf("%d",&n);
//	int i=0;
//while(n--){
//	i=0;
//do{
//	scanf("%d",&num[i]);
//	i++;
//}while(getchar()==' ');
//m=i;
//for(i=0;i<m-1;i++){
//	for(j=i+1;j<m;j++){
//			if(num[i]>num[j]){
//				t=num[i];
//				num[i]=num[j];
//				num[j]=t;
//	}
//}
//}
//for(j=0,k=0,s=0;j<m;j++){
//	if(num[j]%2!=0){
//		a[k]=num[j];
//		k++;
// }
// else{
// 	b[s]=num[j];
// 	s++;
// }
//}
// for(int c=0;c<k;c++){
// 	printf("%d ",a[c]);
// }
// for(int d=0;d<s;d++){
// 	printf("%d ",b[d]);
// }
//	printf("\n");
//	for(i=0;i<50;i++){
//	num[i]=0;
//	a[i]=0;
//	b[i]=0;
//}
//}
//
//	return 0;
//}

//�����ַ���
//˼·�������ַ���������SCU�ҵ�֮�������涨λ��ȷ������֮ǰ���Լ�����֮��ȫ����ΪA 
/*
int main(){
	int m,flag=0,flag1=0,flag2=0;//mΪ��������
	char str[100];
	char a[4]="SCU";
	scanf("%d",&m);
	while (m--){
		flag1=0,flag2=0;//ÿ��ѭ�����жϱ�׼Ҫ���¸�ֵ 
		scanf("%s",str);
		if(strstr(str,a)==0) printf("NO\n");
		else if(strstr(str,a)!=0){
			for(int i=0;i<strlen(str);i++){
				if(str[i]=='S'){
				 flag=i;
				 break;
				 }
			}
			for(int j=flag-1;j>0;j--){
				if(str[j]!='A')
				 flag1=1; 
			}
			for(int k=flag+3;k<strlen(str);k++){
				if(str[k]!='A') flag2=1;
			}
		
		if(flag1==1||flag2==1){
			printf("NO\n");
		}
		else printf("YES\n");
	}
	
}
	return 0;
} 

*/ 
//���ӱ��
//˼·�������ά���飻����һά�����������������if���жϣ�������ز���
int main(){
	int m,n,i=0,j=0,x,y,p,tempt;
	char a[20][20];
	char mand[3];
	scanf("%d%d",&m,&n);
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d",&p);//pΪ��������
	while(p--){
	scanf("%s",mand);
	//�н��� 
	if(strcmp(mand,"SR")==0){
		scanf("%d%d",&x,&y);
		for(i=0;i<n;i++){//�����ұ��� 
			tempt=a[x-1][i];
			a[x-1][i]=a[y-1][i];
			a[y-1][i]=tempt;
		}
	}
	//�н��� 
	else if(strcmp(mand,"SC")==0){
		scanf("%d%d",&x,&y);
		for(i=0;i<m;i++){//���ϵ��±��� 
			tempt=a[i][x-1];
			a[i][x-1]=a[i][y-1];
			a[i][y-1]=tempt;
	}
   }
   //ɾ��һ�� 
   else if(strcmp(mand,"DR")==0){//��һ�еĵ�����һ�еģ���ɾ�������п�ʼ 
   scanf("%d",&x);
   	for(i=x;i<m;i++){
   		for(j=0;j<n;j++){
   			a[i-1][j]=a[i][j];
		   }
	   }
	   m--; 
   }
   //ɾ��һ�� 
   else if(strcmp(mand,"DC")==0){//��ߵĵ����ұߵģ���ɾ������һ�п�ʼ 
   scanf("%d",&x);
   for(i=x;i<n;i++){
   		for(j=0;j<m;j++){
   			a[j][i-1]=a[j][i];
		   }
	   } 
	   n--; 
   }
   //����һ�� 
   else if(strcmp(mand,"IR")==0){//�ȴӲ������п�ʼ�����ƺ��ٽ�ԭ��������0�� 
   scanf("%d",&x);
   		for(i=m;i>=x;i--){
   		for(j=0;j<n;j++){
   			a[i][j]=a[i-1][j];
		   }
	   }
	   
	   m++;
	   for(j=0;j<n;j++) 
	   {a[x-1][j]=0;} 
	   
   }
   //����һ�� 
    else if(strcmp(mand,"IC")==0){//�ȴӲ������п�ʼ�����ƺ��ٽ�ԭ��������0�� 
    scanf("%d",&x);
   		for(i=n;i>=x;i--){
   		for(j=0;j<m;j++){
   			a[j][i]=a[j][i-1];
		   }
	   }
	   n++;
	   for(j=0;j<m;j++) 
	   {
	   a[j][x-1]=0;}
	   
   }
   
}
int count1=0;
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		printf("%d ",a[i][j]);
		count1++;
		if(count1%n==0){
			printf("\n");
		}
	}
}
	return 0;
} 


























