#include<stdio.h>
int main(){
//	printf("hello,world!\n");
//	printf("%d",12+34);
/*   int num1=0,num2=0;
   
   printf("enter the first number and the second number\n");
   scanf("%d,%d",&num1,&num2);
  
   int sum=0;
   sum = num1 + num2;
   printf("sum =%d\n",sum);
   */
   
   
/*int AMOUNT =0;
int price=0;
printf("请输入收入\n",AMOUNT);
scanf("%d",&AMOUNT); 
printf("请输入金额（元）：\n");
scanf("%d", &price);

int change = AMOUNT - price;

printf("找您%d元。\n",change);
*/

//棒棒哒，难得的顺利！！ 
 /* int hour1,minute1;
  int hour2,minute2;
  scanf("%d %d",&hour1,&minute1);
  scanf("%d %d",&hour2,&minute2);
   int  a = hour1 * 60 + minute1;
   int b = hour2 * 60 + minute2;
   int c = a - b;
   int d = c / 60;
   int m = c % 60;
   printf("时间差为%d时%d分\n",d,m);
   */
   
/*找零   
int a,b;
   printf("请输入票面%d 请输入金额%d \n",a,b);
   scanf("%d %d",&a,&b);
   if(a>=b){
   	printf("应该找您%d元。\n",a-b);
   } 
   else{
   	printf("金额不足"); 
   }
  */ 
   /*判定成绩 
   const int pass = 60;
   int score;
   printf("请输入您的成绩\n",score);
   scanf("%d",&score);
   if(score>= pass)
     printf("您的考试通过\n"); 
   else
     printf("您的考试未通过\n");
   printf("再见\n"); 
	*/
/* 
	int a,b,c;
	int max=a;
	scanf("%d %d %d",&a,&b,&c);
	if(b>a){
		if(b>c)
		max=b;
		else
		max=c;
	}
	else{
		if(c>a)
		max=c;
		else 
		max=a;
	}
	 printf("the max =%d \n",max);
*/
    int x;
    int n=0;
    scanf("%d",&x);
    n++;
    x /=10;
    while(x>0){
    	n++;
    	x /=10;
	}
    printf("%d\n",n);
    
    
	return 0;
} 
