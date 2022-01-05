#include<stdio.h>
int main(){
	int n,num,temp=0;
	printf("Enter the number :-\n");
	scanf("%d",&num);
	n=num;
	while(n!=0){
		temp=temp+((n%10)*(n%10)*(n%10));
		n=n/10;
	}
	if(temp==num){
		printf("Yes %d is the Armstrong Number\n",num);
	}
	else{
		printf("Yes %d is not the Armstrong Number\n",num);
	}
}
