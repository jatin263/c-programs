#include<stdio.h>
#include<string.h>
int main(){
	char st1[100],st2[100],st3[1000];
	puts("Enter the 1st string\n");
	gets(st1);
	puts("Enter the 2nd string\n");
	gets(st2);
	puts(strcat(st1,st2));
}
