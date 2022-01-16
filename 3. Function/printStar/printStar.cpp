#include <stdio.h>

void printStar(int a){
	for(int i = 1; i<=a; i++) printf("*");
}

int main(){
	int a,b,c;
	scanf("%d",&a);
	for(b = 1; b <= a; b++)
	{
		printStar(b);
		printf("\n");
	}
	return 0;
}
