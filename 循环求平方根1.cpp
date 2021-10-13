#include<stdio.h>

	int main(){
	
	float target = 2.0f,left = 0.0f,right = target;
	float mid =(left + right) /2;
	while((right-left)>0.00001){
		if(mid*mid < target){
			left = mid;
		}
		else{
			right = mid;
		}
		mid = (left + right)/2;
	}
	printf("2的平方根为%f\n",mid);
	return 0.0f;
}
