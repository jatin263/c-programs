#include<stdio.h>
int main(){
	int year;
	printf("Enter the year :-\n");
	scanf("%d",&year);
	if(year%100==0){
		printf("NOT LEAP YEAR");
	}
	else{
		if(year%4 == 0){
			printf("LEAP YEAR");
		}
		else{
			if(year%400 == 0){
				printf("LEAP YEAR");
			}
			else{
				printf("NOT LEAP YEAR");
			}
		}
	}
}
