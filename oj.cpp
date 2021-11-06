#include<stdio.h>


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

/*
int main(){
int a=0,b=0;
while(++a>0);
	printf("int 类型数据的最大数为%d\n",a-1);
while((a-1)/10!=0){
	b++;
}
printf("数位为%d\n",b);

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



































