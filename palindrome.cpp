#include<stdio.h>
int main(){
	int num,n,rev=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	n=num;
	while(n!=0){
		rev=rev+n%10;
		n=n/10; 
	}
	if(rev==num){
		printf("Yes");
	}
	else{
		printf("No");
	}
}
