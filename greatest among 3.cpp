#include<stdio.h>
int main(){
	int a,b,c,ans;
	printf("Enter the value of a :-\n");
	scanf("%d",&a);
	printf("Enter the value of b :- \n");
	scanf("%d",&b);
	printf("Enter the value of c :- \n");
	scanf("%d",&c);
	if(a>=b && a>=c){
		ans=a;
	}
	else{
		if(b>=c && b>=a){
			ans=b;
		}
		else{
			ans=c;
		}
	}
	printf("%d is the largest number",ans);
	return 0;
}
