#include <stdio.h>

bool isPrime(int a){
	if(a==1) return 0;
	for(int b = 2; b < a; b++) if(a%b==0) return 0;
	return 1;
}

int main(){
	int a,b;
	scanf("%d\n",&a);
	for(int i = 1; i<=a; i++)
	{
		scanf("%d", &b);
		if(isPrime(b)) printf("%d ", b);
	}
	return 0;
}
