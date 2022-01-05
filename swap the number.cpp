#include<stdio.h>
int main(){
	int a,b,temp;
	printf("Enter the value of a :- \n");
	scanf("%d",&a);
	printf("Enter the value of b :- \n");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("The value of a :- %d\n",a);
	printf("The value of b :- %d",b);
	return 0;
}
