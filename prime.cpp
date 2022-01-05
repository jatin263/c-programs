#include<stdio.h>
int main(){
	int n,count=0;
	printf("Enter the number to check the number is prime or not\n");
	scanf("%d",&n);
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			count=count+1;
		}
	}
	if(count==0){
		printf("Prime");
	}
	else{
		printf("Non Prime");
	}
}
