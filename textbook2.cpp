#include<stdio.h>
//int main(){
	//1.computes a universal product code check digit
/*
	int d,i1,i2,i3,i4,i5,j1,j2,j3,j4,j5,first_sum,second_sum,total;
	
	printf("Enter the first (single) digit:");
	scanf("%d",&d);
	printf("Enter first group of five digits:");
	scanf("%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5);
	printf("Enter second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d",&j1,&j2,&j3,&j4,&j5);
	
	first_sum = d + i2 + i4 + j1 + j3 +j5;
	second_sum = i1 + i3 + i5 +j2 + j4;
	total = first_sum*3 + second_sum;
	
	printf("Check digit: %d\n",9 - (total - 1)%10);
*/
//2.calculates a broker's commission
/*
float commission,value;

printf("Enter value of trade:");
scanf("%f", &value);

if (value<2500.00f){
	commission = 30.00f+.017f*value;
}else if(value<6250.00f){
	commission = 56.00f+.0066f*value;
}else if(value<20000.00f){
	commission =76.00f + .0034f*value;
}else if(value<50000.00f){
	commission = 100.00f+.0022f*value;
}else if(value<500000.00f){
	commission = 155.00f+.0011f*value;
}else
commission = 255.00f+.00009f*value;

if(commission<39.00f)
commission = 39.00f;

printf("commission:$%.2f\n",commission);

*/
//3.switch
/*
int grade;
scanf("%d",&grade);
switch(grade) {
	case 4:
	case 3:
	case 2:
	case 1: printf("passing:");
	break;
	case 0: printf("failing");
	break;
	default: printf("illegal grade");
	
	break;
	
}
*/
//4.switch__print a date in a legal form
/*
int day,month,year;

printf("Enter date(mm/dd/yy): ");
scanf("%d /%d /%d",&month,&day,&year);

printf("Dated this %d",day);
switch(day){
	case 1: case 21: case 31:
		printf("st");break;
	case 2: case 22:
		printf("nd");break;
	case 3: case 23:
		printf("rd");break;
		default: printf("th");break;
}
printf(" day of ");

switch(month){
	case 1: printf("January");break;
	case 2: printf("February");break;
	case 3: printf("March");break;
	case 4: printf("April");break;	
	case 5: printf("May");break;
	case 6: printf("June");break;
	case 7: printf("July");break;
	case 8: printf("August");break;
	case 9: printf("September");break;
	case 10: printf("Octobor");break;
	case 11: printf("November");break;
	case 12: printf("December");break;

}
printf(", 20%.2d.\n",year);
*/

//5.Prints a table of squares using a while statement
/*int i,n;

printf("This program prints a table of square.\n");
printf("Enter number of entries in table");
scanf("%d",&n);

i=1;
while(i<=n){
	printf("%-10d%-10d\n",i,i*i);
	i++;
}
*/


//6.Calculates the number of digits in an integer
/*
int digits=0,n;

printf("Enter a nonnegtive integer: ");
scanf("%d",&n);

do{
	n /= 10;
	digits++;
}while(n>0);

printf("The number has %d digits.\n",digits);
*/
  
  //7.Balances a checkbook
 /*
  int cmd;
  float balance = 0.0f,credit,debit;
  
  printf("***ACME checkbook-balancing program***\n");
  printf("Commands:0=clear,1=credit,2=debit,3=balance,4=exit\n");
  
  for(;;){
  	printf("Enter command: ");
  	scanf("%d",&cmd);
  	switch (cmd){
  		case 0:
  			balance=0.0f;
  			break;
  		case 1:
  			printf("Enter amount of credit: ");
  			scanf("%f",&credit);
  			balance+=credit;
  			break;
  		case 2:
  			printf("Enter amount of debit: ");
  			scanf("%f",&debit);
  			balance-=debit;
  			break;
  		case 3:
  			printf("Current balance:$%.2f\n",balance);
  			break;
  		case 4:
  			return 0;
  		default:
  			printf("Commands:0=clear,1=credit,2=debit,3=balance,4=exit\n\n");
  			break;
  			
	  }
  } 
 

} */










//三个数从小到大排列 
#include <stdio.h>
int main()
{
int t,a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a<b)
{
t=a,a=b,b=t;
}
if(a<c)
{
t=a,a=c,c=t;
}
if(b<c)
{
t=b,b=c,c=t;
}
printf("%d %d %d\n",c,b,a);
return 0;
}






















