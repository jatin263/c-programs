#include<stdio.h>
int main(){
	int n,fab0=0,fab1=1,summ=0;
	printf("Enter the number where you want to print Fibonaaci Number:-\n");
	scanf("%d",&n);
	printf("%d,%d,",fab0,fab1);
	for(int i=2;i<=n;i++){
		summ=fab0+fab1;
		if(i!=n){
			printf("%d,",summ);
		}
		else{
			printf("%d",summ);
		}
		fab0=fab1;
		fab1=summ;
	}
}
