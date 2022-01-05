#include<stdio.h>
int main(){
	int n,num,summ=0;
	printf("Enter the number:-\n");
	scanf("%d",&num);
	n=num;
	while(n!=0){
		summ=summ+(n%10);
		n=n/10;
	}
	printf("The of Sum of digit of %d = %d",num,summ);
}
