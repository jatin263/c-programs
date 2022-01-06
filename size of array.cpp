#include<stdio.h>
int main(){
	int ar[100];
	printf("%d\n%d",sizeof(ar),sizeof(ar)/sizeof(ar[1]));
}
