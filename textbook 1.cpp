#include<stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f) 
int main(){
	//1.计算箱子的空间重量 
	
/*	int height, length, width, volume, weight;

	printf("请输入长宽高\n");
	scanf("%d%d%d",&length,&width,&height);
	
	volume = height * width * length;
	weight = (volume + 165)/166;
	
	printf("dimension为%d\ndimensional weight为%d",volume,weight);
*/
	 
	 
	 //2.将华氏度转化为摄氏度
	 
	 /*
	 
	  float  fahrenheit,celsius;
	  
	  printf("Enter Fahrenheit tempotature: \n");
	  scanf("%f",&fahrenheit);
	  
	  celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
	  
	  printf("Celsius equivalent: %.1f\n",celsius);
	  
	*/
	
	//3.计算球体体积 
	/* 
	int r;
	float V;
	
	printf("请输入球体半径\n");
	scanf("%d",&r);
	
	V = 4.0f/3.0f *3.14*r *r *r;//不能直接使用π 
	printf("球的体积为%f\n",V);
	 */
	 
	 //4.编写一个程序，用最少张数的20.10.5.1美元来付钱
	 /*
	 int fee;
	 int twenty,ten,a,five,b,one;
	 
	 printf("Enter a dollar amount :\n");
	 scanf("%d",&fee);
	 
	 twenty = fee/20;
	 a=fee%20;
	 ten=a/10;
	 b=a%10;
	 five=b/5;
	 one=b%5;
	 
	 printf("$20 bills:%d \n$10 bills:%d \n$5 bills:%d \n$1 bills:%d \n",twenty,ten,five,one);
	  */
	  
	  //5.计算还款1、2、3月后剩余的贷款金额
	  /*
	  float yearrate,monthrate,monthpayment,remain,amount;
	  float a,b,c,d,e;
	  
	  printf("Enter amount of loan\n");
	  scanf("%f",&amount);
	  printf("Enter interest rate\n");
	  scanf("%f",&yearrate);
	  printf("Enter monthly payment\n",monthpayment);
	  scanf("%f",&monthpayment);
	  
	  monthrate = yearrate/100/12;
	  a=amount - monthpayment;
	printf("Balance remaining after first payment:$%.3e\n",a);
	
	b=a*(1+monthrate);
	c=b-monthpayment;
	printf("Balance remaining after second payment:$%.2f\n",c);
	  
	  d=c*(1+monthrate);
	  e=d-monthpayment;
	printf("Balance remainin\tg aft\bmer third payment:$%.2f\n",e);
	  */
	  int i,x,j;
	  scanf("%f%d%f",&i,&x,&j);
	  printf("%f\n%d\n%f\n",i,x,j);
	  
	  
	return 0;
}





















