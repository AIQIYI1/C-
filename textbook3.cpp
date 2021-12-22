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
//大小写的字母转换 
/*int main(){

char c1,c2;
c1=getchar();
c2=c1+32;
putchar(c2);
putchar('\n');

return 0;
}
*/
//替换字符成字母后的第4位；
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

//排序算法——起泡法,定义的变量作用，首先是数组（然后输入数据）→i用来记进行了多少次循环→j用来记录需要多少次循环→最后打印 
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

//a、b数组的元素互换
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

//数组中最大数以及相应的行和列；
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
//一维数组：int a[10]是定义，t=a[1] 是引用 ；可部分赋值，也可全部赋值 
//二维数组：int a[][]是定义，t=a[][]是引用，注意赋值的时候， 可以部分赋值，也可全部复制，第一个表示行，第二个表示列，
// 可以不声明有多少行，但是要声明有多少列；如果有三行，想要跳过第二行，给第三行赋值，可以用空的花括号来表示第二行的值 ;
//字符数组：首先关于其赋值，可以将单个字符挨个赋给每个元素，也可以将整个字符串用双引号引起来赋给数组；
//关于引用：可以挨个引用字符%c,也可以直接引用整句话%s, //关于输入：不用使用取地址符号；如果要得到其地址，可以用%O来获得其起始地址； 

//输出菱形图案
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

//strcat 连接函数 strcat(字符数组1，字符数组2)，1必须比2大；
//strncpy 复制函数 strncpy(字符数组1，字符数组2)，2复制到1中，1必须比2大，2可以是数组，也可以是字符常量；
//strcmp  字符比较函数 strcmp(字符数组1，字符数组2)，如果1大于2则输出正整数，否则输出负整数；
//strlen 测字符串的实际长度，不包括\0；
//strlwr 大写变小写
//strupr 小写变大写 
//int main(){
/*	char ch1[30]="People's republic of ";
	char ch2[10]="China\0";
	printf("%s",strncpy(ch1,ch2,5));
*/
//计算单次数量
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
 //strupr和strler 的格式printf("%s",strupr(str1));
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
//筛选法求100以内的素数 
/* 
int main(){
	int a[100],i,j,n;
	for(i=0;i<100;i++){//给100个量赋值 
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

//素数表 （筛选法、从小的素数推导大的素数）

int main(){
	int a=1;
	printf("%d",a++);
	return 0;
}
*/
//判断连线是否成功 

//尝试 
/* 
int main(){
	int i=0;
	int p;


	printf("%p\n",&i);
	return 0;
}

**************************************************************/

//函数  
/*
int main(){
	void print_star();//进行声明，包括函数名字、类型、参数的个数和类型，以便于后面做检查； 
	void print_message();
	int add(int a,int b);
	int a,b,c; 
	print_star();
	print_message();
	print_star();

	c=add(a,b);
	printf("%d",c);

//在函数定义的时候的参数为形参（x,y），在调用的时候的函数是实参(a,b)；
//在运行过程中，通过return赋值，x,y发生了变化，但是a,b未发生变化	
	
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

//不可以对函数进行嵌套定义，但是可以进行嵌套调用，
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

//函数的递归调用，直接或间接地调用函数本身；


//简单例子，有5个学生坐在一起，问年龄，
/*age 5 =age 4 +2;age 4=age 3 +2;age 3=age 2 +2;age 2=age 1 +2;
用数学公式可知,age n=10(n=1)&&age(n)=age(n-1)+2,*/
//用函数来表示：
/*
int age(int n){//n表示第几个学生 
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

//算阶乘  ?输入负数的时候有0；
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
 
 //和尚挪盘子
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
//当数组元素用作实参时，传递的是数组元素的值，而用数组名做实参时，
//向形参传递的是首元素的地址

/*调用函数，计算班级的平均成绩*/
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
 //在引用函数的时候，数组不需要带括号，但是在定义的时候，必须带括号，不一定带个数； 
 
 //选择法排序
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

//找出多维数组的最大值
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

//调用1个函数输出三个值，（一般情况下，只能返回一个值），引用全局变量；
//使得在新函数中得到的值，在主函数中也能使用 
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

//区分指针和指针变量：i的指针为某个地址，但是不能说i的指针变量是某个地址；
// *表明了该变量为指针变量，真正的变量名字为后面的；赋值的时候是赋给了后面的 变量名，
//定义的时候注意声明指针的类型，它只能指向同一类型的变量。
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
//引用指针变量；
//1.赋值：p=&a;把a的地址赋值给p，p指向了整形变量a;
//2.引用指针变量指向的变量：printf("%d",*p)，赋值语句：*p=a,意思是给a赋值； 
//3. 引用指针变量的值，printf("%o",p),以八进制的形式输出a的地址；
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

//指针变量作为函数参数→通过改变函数中指针变量指向的变量的值，来改变了主函数中的值 
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

//3变量交换，通过改变指针变量所指变量的值来改变
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
//指针型数据的算术运算
//int *p;  p+1即为下一个元素; p2-p1得到的是两个指向的元素的相对距离（地址之差）/每个元素占用空间大小
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

//倒序排列 
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

//选择法排序
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
//++(*p)&*(++p);前者是先查看*p的值，再给对应的值自加；后者是先给P自加，再查看值；
int main(){
//	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
//	printf("%d,%d ",a,*a);//0行起始地址 ;0行0列元素地址 
//	printf("%d,%d ",a[0],*(a+0));//0行0列元素地址 
//	printf("%d,%d ",&a[0],&a[0][0]);//0行起始地址；0行0列元素地址 
//	printf("%d,%d ",a[1],a+1);//1行0列元素地址；1行起始地址 
//	printf("%d,%d ",&a[1][0],*(a+1)+0);//1行0列元素地址；1行0列元素地址 
//	printf("%d,%d ",a[2],*(a+2));//2行0列元素地址； 
//	printf("%d,%d ",&a[2],a+2);//2行起始地址 
//	printf("%d,%d ",a[1][0],*(*(a+1)+0));//1行0列元素值 
//	printf("%d,%d ",*a[2],*(*(a+2)+0));//2行0列元素值； 
	
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

//指针指向字符串数组；

//结构体：结构体指针、结构体数组 
}









































 


















































