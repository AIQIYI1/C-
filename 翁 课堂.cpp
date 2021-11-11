#include<stdio.h>
//判断素数 
//int main(){
/*	int x,i=2;
	int isPrime=1;
	printf("请任意输入一个整数\n");
	scanf("%d",&x);
	while(i<x){
	i++;
	if(x%i==0){
		isPrime=0;
		break; 
	}
	}
	if(isPrime==0){
		printf("%d非素数\n",x);
	}
	else {
		printf("%d为素数\n",x);
	}
*/



//输出100以内的所有素数 (把第一个for循环用不到的变量，定义在循环里，第2个循环以外）
/* 
int x;

for(x=1;x<=100;x++){
int i,isPrime = 1;
for(i=2;i<x;i++){
	if(x%i==0){
		isPrime=0;
		break;
	}

}if(isPrime==1){
	printf("%d\n",x);	
}


}

	return 0;
} 
*/



//输出前50个素数
 /*
int main(){
int count=0,x;
x=2;
while(count<=50){
int i,isPrime=1;
	for(i=2;i<x;i++){
		if(x%i==0){
			isPrime==0;
        break;  
		}
	}
			if(isPrime==1){
		count++;
		printf("%d\n",x);	
		}
	
	
	
	x++;
}	
	return 0;
} 
 */
 
 
 
 //凑整元
 /*int main(){
 
 	int x;
 	int one,two,five;
 	scanf("%d",&x);
 	for(one=1;one<x*10;one++){
 		for(two=1;two<x*5;two++){
 			for(five=1;five<x*2;five++){
 				if(one+two*2+five*5==x*10){
 					printf("凑%d元需要%d张1角，%d张2角，%d张5角\n",x,one,two,five);
 					goto exit; 
				 }
			  }
	 }
	 }
	 exit:
	 return 0;
}
*/
//求前n项和
/*
int main(){
	int x=1,n;
	double sum=0.0;
	printf("请输入n\n");
	scanf("%d",&n);
	
	for(x=1;x<=n;x++){
		sum+=1.0 /x;
	}
	printf("结果为%f\n",sum); 
	return 0;
} 
*/




//求浮动的n项和
/*
int main(){
	int x,sign=1,n;
	double sum;
	printf("请输入n\n");
	scanf("%d",&n);
	
	for(x=1;x<=n;x++){
		sum+=sign*1.0/x;
		sign= -sign;
	}
	printf("前n项和为%f\n",sum);
	return 0;
} 
*/




//整数分解
/*
int main(){

int t,q=0,x=0 ,n;
printf("请输入整数t\n");
scanf("%d",&t);

do{
	q=t%10;
	t=t/10;

	x=x*10+q;
} while(t>0);
printf("%d\n",x);

do{
	n=x%10;
	x=x/10;
	printf("%d ",n);
}while( x>0);

return 0;	
}
*/




//最大公约数

//递减
/* 
int main(){
	int a,b;
	int min, i=0,rec=0;
	
	printf("请输入a,b\n");
	scanf("%d %d",&a,&b);
	
	if(a<b){
		min=a;
		}else{
			min=b;
		}
	for(rec=min;rec>=0;rec--){
		if(a%rec==0){
			if(b%rec==0){
			printf("%d\n",rec);
			break;
			}
		}
	}	
	return 0;
} 
*/

//辗转相除法
/*
 int main(){
 	int a,b;
 	int t;
 	
 	printf("请输入a,b\n");
	 scanf("%d %d\n",&a, &b);
	
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}  
	printf("%d与%d的最大公约数为%d\n",a,b,t);
 	return 0;
 }
 */
 /*
 int main(){
 	float data=9.9f;
 	int value=data;
 	printf("%f\n%d\n",data, value);
 	printf("%d\n%d\n",&data, &value);
 	return 0;
 }
 */
 
 
 
 
 //给定条件的整数集 
/* 
 int main(){
 	int a=0;
 	int i,j,k,count;
 	printf("请输入小于6的整数\n");
 	scanf("%d",&a);
 	i=a;
 	while(i<=a+3){
 		j=a;
 		while(j<=a+3){
 			k=a;
 			while(k<=a+3){
 				if(i!=j && j!=k && i!=k){
 					count++;
 					printf("%d%d%d",i,j,k);
 					if(count==6){
 						printf("\n");
 						count=0;
 				}
					 	else{
 							printf(" ");
						 }
					
				 }
 				k++;
			 }
			 j++; 
		 }
		 i++;
	 }
	  
 	return 0;
 }
 */
 
 
 
 
 //计算水仙花数
 int main(){
 	int n,num,num1=100;
 	printf("请输入n(3<=n<=7)\n");
 	scanf("%d",&n);
 	if(n=3){
	 
 	int first,second,third,i=0,sum;
 		//100-999的每一个三位数
		while (num1<=999){
			num=num1;
			first=num%10;
			num=num/10;
			second=num%10;
			num=num/10;
			third=num%10;
			do{
				i++;
				first*=first;
				second*=second;
				third*=third;
			}while(i<=n);
			sum=first+second+third;
			if(num==sum){
				printf("%d",num);
			}
		num1++;
		} 
 	} 	
 	return 0;
 } 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
