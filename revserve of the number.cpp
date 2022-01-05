#include<stdio.h>
int main(){
	int n,num,rev=0;
	printf("Enter the number:-\n");
	scanf("%d",&num);
	n=num;
	while(n!=0){
		rev=(rev*10)+(n%10);
		n=n/10;
	}
	printf("The Reverse of %d is %d\n",num,rev);
	return 0;
}
