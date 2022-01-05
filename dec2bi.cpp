#include<stdio.h>
int main(){
	int dec,n,rev[100],bi=0,co=1,sizee=1;
	printf("Enter Decimal Number\n");
	scanf("%d",&dec);
	n=dec;
	while(n!=0){
		bi=bi+(n%2)*co;
		n=n/2;
		co=co*10;
	}
	printf("%d",bi);
}
