#include<stdio.h>
int main(){
	int num,n,fact=1;
	printf("Enter the number:-\n");
	scanf("%d",&num);
	n=num;
	while(n>0){
		fact=fact*n;
		n=n-1;
	}
	printf("Factorial of %d = %d",num,fact);
	return 0;
}
