#include<stdio.h>
int main(){
	
	int a,b=0;
	printf("sayi gir ");
	scanf("%d",&a);
	int c=a;
	
	while(a!=0){
		b*=10;
		b+=a%10;
		a/=10;
	}
	
	printf("%d travers %d",c,b);
	
	
	
}
