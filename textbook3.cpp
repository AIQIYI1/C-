#include<stdio.h>
#include<string.h>
//int main(){
	/*
int main()
{
	char a,b,c;
	a=getchar();
	b=getchar();
	c=getchar();
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');
	return 0;
}
*/
//��Сд����ĸת�� 
/*int main(){

char c1,c2;
c1=getchar();
c2=c1+32;
putchar(c2);
putchar('\n');

return 0;
}
*/
//�滻�ַ�����ĸ��ĵ�4λ��
/* 
char c1='C',c2='h',c3='i',c4='n',c5='a';
c1=c1+4;c2=c2+4;c3=c3+4;c4=c4+4;c5=c5+4;
putchar(c1);
putchar(c2);
putchar(c3);
putchar(c4);
putchar(c5);
putchar('\n');

printf("%c%c%c%c%c",c1,c2,c3,c4,c5);
*/
/*
int a[5],i;
for(i=0;i<=4;i++){
	a[i]=i+1;
	printf("%d",a[i]);
} */

/*
int i;
int a[20]={1,1};
for(i=2;i<20;i++){
	a[i]=a[i-1]+a[i-2];
	}
	for(i=0;i<20;i++){
		printf("%12d",a[i]);
	if((i+1)%5==0){
		printf("\n");
}
}*/

//�����㷨�������ݷ�,����ı������ã����������飨Ȼ���������ݣ���i�����ǽ����˶��ٴ�ѭ����j������¼��Ҫ���ٴ�ѭ��������ӡ 
/* 
int a[10],i,t,j;
printf("please input 10 numbers\n");
for(i=0;i<10;i++){
	scanf("%d",&a[i]);
	printf("\n");
}
for(j=0;j<9;j++){

for(i=0;i<9-j;i++){
	if(a[i]>a[i+1]){
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
		}
}
}
for(i=0;i<10;i++){
	printf("%5d",a[i]);
}
*/

//a��b�����Ԫ�ػ���
/*
int main(){

int a[3][2]={{9,8},{2,6},{6,7}};
int b[2][3],i,j;
printf("array a:\n");
for(i=0;i<=2;i++){
	for(j=0;j<=1;j++){
		printf("%5d",a[i][j]);
		b[j][i]=a[i][j];
	}
	printf("\n");
} 
	
	printf("array b:\n");
	for(j=0;j<=1;j++){
	for(i=0;i<=2;i++){
		printf("%5d",b[j][i]);
	}
	printf("\n");
	}

	return 0;
}
*/

//������������Լ���Ӧ���к��У�
/*
int main(){
	int a[3][4]={{0,1,2,8},{13,7,8,9},{2,5,17,12}};
	int max,row,colum,i,j;
	max=a[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(a[i][j]>max){
				max=a[i][j];
				row=i;
				colum=j;
			}
		}
	}
	printf("max=%d,row=%d,colum=%d",max,row,colum);
	return 0;
}
*/
//һά���飺int a[10]�Ƕ��壬t=a[1] ������ ���ɲ��ָ�ֵ��Ҳ��ȫ����ֵ 
//��ά���飺int a[][]�Ƕ��壬t=a[][]�����ã�ע�⸳ֵ��ʱ�� ���Բ��ָ�ֵ��Ҳ��ȫ�����ƣ���һ����ʾ�У��ڶ�����ʾ�У�
// ���Բ������ж����У�����Ҫ�����ж����У���������У���Ҫ�����ڶ��У��������и�ֵ�������ÿյĻ���������ʾ�ڶ��е�ֵ ;
//�ַ����飺���ȹ����丳ֵ�����Խ������ַ���������ÿ��Ԫ�أ�Ҳ���Խ������ַ�����˫�����������������飻
//�������ã����԰��������ַ�%c,Ҳ����ֱ���������仰%s, //�������룺����ʹ��ȡ��ַ���ţ����Ҫ�õ����ַ��������%O���������ʼ��ַ�� 

//�������ͼ��
/*
int main(){
	int i,j;
	char ch[15]={'I',' ','a','m',' ','s','t','u','d','e','n','t'},ch2[5],ch3[5],ch4[5],ch5[5];
	scanf("%s%s%s",ch2,ch3,ch4);
	puts(ch2);
	gets(ch5);
	puts(ch5); 
	for(i=0;i<15;i++){
		printf("%c",ch[i]);
	}
	printf("\n");
	char ch1[5][5]={{' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'}};
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%c",ch1[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/

//strcat ���Ӻ��� strcat(�ַ�����1���ַ�����2)��1�����2��
//strncpy ���ƺ��� strncpy(�ַ�����1���ַ�����2)��2���Ƶ�1�У�1�����2��2���������飬Ҳ�������ַ�������
//strcmp  �ַ��ȽϺ��� strcmp(�ַ�����1���ַ�����2)�����1����2����������������������������
//strlen ���ַ�����ʵ�ʳ��ȣ�������\0��
//strlwr ��д��Сд
//strupr Сд���д 
//int main(){
/*	char ch1[30]="People's republic of ";
	char ch2[10]="China\0";
	printf("%s",strncpy(ch1,ch2,5));
*/
//���㵥������
/* 
int i,num=0,word=0;
char ch[81],str1[40];
gets(ch);
gets(str1);
for(i=0;ch[i]!='\n';i++){
	if(ch[i]==' ') {
		word=0;
	}
	else if(word==0){
		word=1;
		num++;
	}
}
 printf("the number of words:%d",num-1);
 printf("%d\n",strlen(ch));
 if(strcmp(ch,str1)>0){
 	printf("yes\n");
 } 
 //strupr��strler �ĸ�ʽprintf("%s",strupr(str1));
	return 0;
} 
*/
/*
int main(){
	char str[3][20];
	char string[20];
	int i;
	for(i=0;i<3;i++){
		gets(str[i]);
	}
	if(strcmp(str[0],str[1])>0){
		strcpy(string,str[0]);
}
	else{
		strcpy(string,str[1]);
		}
	
		if(strcmp(string,str[2])<0){
			strcpy(string,str[2]);
		}
	
	printf("%s",string);
	return 0;
}
*/
//ɸѡ����100���ڵ����� 
/* 
int main(){
	int a[100],i,j,n;
	for(i=0;i<100;i++){//��100������ֵ 
		a[i]=i+1;
	}
	a[0]=0;
	for(i=0;i<100;i++){
		for(j=i+1;j<100;j++){
			if(a[i]!=0&&a[j]!=0){
				if(a[j]%a[i]==0){
					a[j]=0;
				}
			}
		
		}
	} 
	for(j=1;j<100;j++){
		if(a[j]!=0){
		printf("%5d",a[j]);
		n++;
		}
		if(n%5==0){
			printf("\n");
		}
		
	}
	return 0;
}
*/



/*************************************************************

//������ ��ɸѡ������С�������Ƶ����������

int main(){
	int a=1;
	printf("%d",a++);
	return 0;
}
*/
//�ж������Ƿ�ɹ� 

//���� 
/* 
int main(){
	int i=0;
	int p;


	printf("%p\n",&i);
	return 0;
}

**************************************************************/

//����  
/*
int main(){
	void print_star();//���������������������֡����͡������ĸ��������ͣ��Ա��ں�������飻 
	void print_message();
	int add(int a,int b);
	int a,b,c; 
	print_star();
	print_message();
	print_star();

	c=add(a,b);
	printf("%d",c);

//�ں��������ʱ��Ĳ���Ϊ�βΣ�x,y�����ڵ��õ�ʱ��ĺ�����ʵ��(a,b)��
//�����й����У�ͨ��return��ֵ��x,y�����˱仯������a,bδ�����仯	
	
	return 0;
}
 void print_star(){
 	printf("************************\n");
 }
void print_message(){
	printf("How are you?\n");
}
int add(int a,int b){
	int z;
	scanf("%d%d",&a,&b);
	z=a+b;
	
	return z;
}
*/

//�����ԶԺ�������Ƕ�׶��壬���ǿ��Խ���Ƕ�׵��ã�
/*
int main(){
	int max4(int a,int b,int c,int d);
	int a,b,c,d,max;
	
	scanf("%d%d%d%d",&a,&b,&c,&d);
	max=max4(a,b,c,d);
	printf("%d",max);
} 
int max4(int a,int b,int c,int d){
    int max2(int a,int b);
	return (max2(max2(max2(a,b),c),d));
}
int max2(int a,int b){
	 return (a>b?a:b);
}
*/

//�����ĵݹ���ã�ֱ�ӻ��ӵص��ú�������


//�����ӣ���5��ѧ������һ�������䣬
/*age 5 =age 4 +2;age 4=age 3 +2;age 3=age 2 +2;age 2=age 1 +2;
����ѧ��ʽ��֪,age n=10(n=1)&&age(n)=age(n-1)+2,*/
//�ú�������ʾ��
/*
int age(int n){//n��ʾ�ڼ���ѧ�� 
	int c;
	if(n==1)
	c=10;
	
	else
	c=age(n-1)+2;
	return(c);
} 
int main(){
	int age(int n);
	printf("NO.5,age:%d",age(5)); 
	return 0;
}*/

//��׳�  ?���븺����ʱ����0��
/* 
int main(){
	int fact(int n);
	int n;
	scanf("%d",&n);
	
	printf("%d",fact(n));
	return 0;
} 
 
 int fact(int n){
 	int f;
 	if(n<0){
 		printf("Wrong data!\n");
	 }
	 else if(n==1||n==0){
	 	f=n;
	 	return f;
	 }
	 else if(n>1){
	 	f=n*fact(n-1);
	 	return f;
	 }
	 

 }*/
 
 //����Ų����
 /*
 int main(){
 	void hanoi(int n,char one,char two,char three);
 		int n;
 		printf("the number of the plates\n");
 		scanf("%d",&n);
 		hanoi(n,'A','B','C');
	 
  	return 0;
 } 
 void hanoi(int m,char one,char two,char three){
 	void move(char x,char y);
 	if(m==1){
 		move(one,three);
	 }
	 if(m>1){
	 	hanoi(m-1,one,three,two);
	 	move(one,three);
	 	hanoi(m-1,two,one,three);
	 }
 }
 void move(char x,char y){
 	printf("%c--->%c\n",x,y);
 }
*/
//������Ԫ������ʵ��ʱ�����ݵ�������Ԫ�ص�ֵ��������������ʵ��ʱ��
//���βδ��ݵ�����Ԫ�صĵ�ַ

/*���ú���������༶��ƽ���ɼ�*/
/*
float average(float a[],int n){
	float sum=a[0],aver;
	for(int i=1;i<n;i++){
	sum+=a[i];	
	}
	aver=sum/n;
	return(aver); 
}
int main(){
	float average(float a[],int n);
	float a[10]={25.3,26.2,23.1,22.3,29.2},b[10]={23.1,24.5,3.6,59.2,1.3,6.5,2.3,7.4,6.2,5.3};
	
	float m=average(a,5);
	float n=average(b,10);
	printf("average are %f and %f ",m,n); 
	return 0;
} 
 */
 //�����ú�����ʱ�����鲻��Ҫ�����ţ������ڶ����ʱ�򣬱�������ţ���һ���������� 
 
 //ѡ������
 /* 
 int main(){
 	int sort(int a[],int n);
 	int a[100],n;
 	scanf("%d",&n);
 	for(int i=1;i<n;i++){
 		scanf("%d",&a[i]);
	 }
	 sort(a,n);
	 	for(int i=1;i<n;i++){
 	printf("%d ",a[i]);
 	}
	 return 0;
}
void sort(int a[],int n)
{
	int i,j,k,t;
	for(i=0;i<n-1;i++){
		k=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[k]){
				t=a[k];
				a[k]=a[j];
				a[j]=t;
			}
		}
	}
	}	
*/

//�ҳ���ά��������ֵ
/* 
int main(){
	int max_(int a[3][5]);
	int a[3][5];
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Max is %d\n",max_(a));
	return 0;
} 
int max_(int a[3][5]){
	int max=a[0][0];
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			if(max<a[i][j]){
				max=a[i][j];
			}
		}
	}
	return max;
}
*/

//����1�������������ֵ����һ������£�ֻ�ܷ���һ��ֵ��������ȫ�ֱ�����
//ʹ�����º����еõ���ֵ������������Ҳ��ʹ�� 
/*float Max=0, Min=0;
int main(){
	float average(float a[],int n);
	float a[10];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%f",&a[i]);
	}
	printf("Max=%f,Min=%f,aver=%f",Max,Min,average(a,n));
	
	return 0;
}
float average(float a[],int n){
	float sum=0,aver;
	Max=a[0];
	Min=a[0];
	for(int i=0;i<n;i++){
		if(Max<a[i]||Min>a[i]){
			Max=a[i];
			Min=a[i];
		}
		sum+=a[i];
		
	}
	aver=sum/n;
	return(aver);
}*/

//����ָ���ָ�������i��ָ��Ϊĳ����ַ�����ǲ���˵i��ָ�������ĳ����ַ��
// *�����˸ñ���Ϊָ������������ı�������Ϊ����ģ���ֵ��ʱ���Ǹ����˺���� ��������
//�����ʱ��ע������ָ������ͣ���ֻ��ָ��ͬһ���͵ı�����
/* 
int main(){
	int a=100,b=10;
	int *pointer_1,*pointer_2;
	pointer_1=&a,pointer_2=&b;
	printf("%d %d\n",a,b);
	printf("%d %d\n",*pointer_1,*pointer_2);	
	return 0;
} 
*/
//����ָ�������
//1.��ֵ��p=&a;��a�ĵ�ַ��ֵ��p��pָ�������α���a;
//2.����ָ�����ָ��ı�����printf("%d",*p)����ֵ��䣺*p=a,��˼�Ǹ�a��ֵ�� 
//3. ����ָ�������ֵ��printf("%o",p),�԰˽��Ƶ���ʽ���a�ĵ�ַ��
 /* 
int main(){
	int *p1,*p2,*p,a,b;
	printf("please enter two integer numbers:");
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	if(a<b){
		p=p1;
		p1=p2;
		p2=p;
	}
	printf("a=%d,b=%d\n",a,b);
	printf("Max=%d,Min=%d\n",*p1,*p2);
	return 0;
} 
*/

//ָ�������Ϊ����������ͨ���ı亯����ָ�����ָ��ı�����ֵ�����ı����������е�ֵ 
/*
int main(){
	void swap(int *p1,int *p2);
	int a,b;
	int *pointer_1,*pointer_2;

	printf("please enter a and b\n");
	scanf("%d%d",&a,&b);
	pointer_1=&a;
	pointer_2=&b;
	if(a<b){
		swap(pointer_1,pointer_2);
	}
	printf("Max=%d,Min=%d",a,b);
	return 0;
} 
void swap(int *p1,int *p2){
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}

*/

//3����������ͨ���ı�ָ�������ָ������ֵ���ı�
/*
int main(){
	void swap(int *p1,int *p2);
	int *p1,*p2,*p3;
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	p1=&a;
	p2=&b;
	p3=&c;
	if(a<c) swap(p1,p3);
	if(a<b) swap(p1,p2);
	if(b<c) swap(p2,p3);
	printf("%d %d %d",a,b,c);
	return 0;
} 
void swap(int *p1,int *p2){
 	int temp;
 	temp=*p1;
 	*p1=*p2;
 	*p2=temp;
 	
 }
*/

//int *p=&a[0] === int *p;p=&a[0] ===int *p;p=a;
//ָ�������ݵ���������
//int *p;  p+1��Ϊ��һ��Ԫ��; p2-p1�õ���������ָ���Ԫ�ص���Ծ��루��ַ֮�/ÿ��Ԫ��ռ�ÿռ��С
/* 
int main(){
	int a,n,x,sqrt;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(a<0){
			printf("ERROR\n");
		}
		else if(a=0){
			printf("0.00\n");
		} 
		else if(a>0){
			sqrt=(0+a)/2;
		}
	}
	return 0;
} 
*/

//�������� 
//int main(){ 
////int inv(int a[],int n);
//	int a[10];
//    int *p;
//	p=a;
//	for(p;p<a+10;p++){
//	scanf("%d",p);
//	}
////	for(p=a;p<(a+10);p++)
////	printf("%d ",*p);
////inv(a,10);
//for(p=a;p<a+10;p++){
//printf("%d ",*p);
//} 
//
//
//	return 0; 
//} 
//int inv(int a[],int n){
//	int *i,*j,*p,m,temp;
//	i=a;j=a+n-1;m=(n-1)/2;p=a+m;
//	for(i=a;i<p;i++,j--){
//		temp=*i;
//		*i=*j;
//		*j=temp;
//	}
//}

//ѡ������
/*
int main(){
int sort(int a[],int n);
int a[20],n,*p=a;
scanf("%d",&n);

for(p=a;p<a+n;p++){
	scanf("%d",p);
}
for(p=a;p<a+n;p++){
	printf("%d",*p);
}
sort(p,n);
for(p=a;p<a+n;p++){
	printf("%d",*p);
}

	return 0;
} 
int sort(int *p,int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(*(p+i)<*(p+j)){
				temp=*(p+j);
				*(p+j)=*(p+i);
				*(p+i)=temp;
			}
		}
	}
}
*/
//++(*p)&*(++p);ǰ�����Ȳ鿴*p��ֵ���ٸ���Ӧ��ֵ�Լӣ��������ȸ�P�Լӣ��ٲ鿴ֵ��
int main(){
//	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
//	printf("%d,%d ",a,*a);//0����ʼ��ַ ;0��0��Ԫ�ص�ַ 
//	printf("%d,%d ",a[0],*(a+0));//0��0��Ԫ�ص�ַ 
//	printf("%d,%d ",&a[0],&a[0][0]);//0����ʼ��ַ��0��0��Ԫ�ص�ַ 
//	printf("%d,%d ",a[1],a+1);//1��0��Ԫ�ص�ַ��1����ʼ��ַ 
//	printf("%d,%d ",&a[1][0],*(a+1)+0);//1��0��Ԫ�ص�ַ��1��0��Ԫ�ص�ַ 
//	printf("%d,%d ",a[2],*(a+2));//2��0��Ԫ�ص�ַ�� 
//	printf("%d,%d ",&a[2],a+2);//2����ʼ��ַ 
//	printf("%d,%d ",a[1][0],*(*(a+1)+0));//1��0��Ԫ��ֵ 
//	printf("%d,%d ",*a[2],*(*(a+2)+0));//2��0��Ԫ��ֵ�� 
	
//	void search(float(*p)[4],int n);
//	float score[3][4]={{65,57,70,60},{58,87,90,81},{90,99,100,98}};
//	
//	search(score,3); 
//	return 0;
//} 
//
//void search(float (*p)[4],int n){
//	int i,j,flag;
//	for(j=0;j<n;j++){
//		flag=0;
//		for(i=0;i<4;i++){
//			if(*(*(p+j)+i)<60){
//				flag=1;
//				if(flag==1){
//					printf("No. %d fails,his scores are:\n",j+1);
//					printf("%5.1f",*(*(p+j)+i));
//					printf("\n");
//				}
//			}
//		}
//	}

//ָ��ָ���ַ������飻

//�ṹ�壺�ṹ��ָ�롢�ṹ������ 
}









































 


















































