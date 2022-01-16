#include <stdio.h>

int digit(int n){
	if(n<10) return 1;
	if(n<100) return 2;
	if(n<1000) return 3;
	if(n<10000) return 4;
}

int main(){
	int a;
	scanf("%d",&a); // 1~9999
	printf("%d",digit(a));
	return 0;
}
