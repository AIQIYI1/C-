#include<stdio.h>
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
































