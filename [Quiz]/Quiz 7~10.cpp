#include <stdio.h>

//문제 7번 
//int main(){
//	char a[100] = {0,},b[100],c = 0;
//	gets(a);
//	for(int i = 0; i < 100; i++)
//	{
//		if(a[i]>=65 && a[i]<=90) b[c++] = a[i] + 32; //대문자 -> 소문자 
//		if(a[i]>=97 && a[i]<=122) b[c++] = a[i]; //소문자 그대로 
//	}
//	printf("%s",b); 
//	return 0;
//}

//문제 8번 
//int main(){
//	int cnt = 0;
//	char a[30] = {0,};
//	scanf("%s",&a);	
//	for(int i = 0; i < 30; i++)
//	{
//		if(a[i] == 40) cnt++;
//		if(a[i] == 41)
//			if((--cnt) < 0) break;
//	}
//	cnt==0?printf("YES"):printf("NO");
//	return 0;
//}

//문제 9번 
//int main(){
//	int a, cnt;
//	scanf("%d",&a);
//	for(int i = 1; i <= a; i++)
//	{
//		cnt = 0;
//		for(int j = 1; j <= i; j++)
//			if(i%j==0) cnt++;
//		printf("%d ",cnt);
//	}
//	return 0;
//}

//문제 10번 
int digit_sum(int x){
	int sum = x/1000000
			+(x%1000000)/100000
			+(x%100000)/10000
			+(x%10000)/1000
			+(x%1000)/100
			+(x%100)/10
			+(x%10);
	return sum;
}

int main(){
	int n,temp,max_sum = -1,max = 0,a[100] = {0,};
	scanf("%d",&n);
	for(int i = 0; i<n; i++)
	{
		scanf("%d",&a[i]);
		temp = digit_sum(a[i]);
		if(temp>max_sum)
		{
			max_sum = temp;
			max = a[i];
		}
		else if(temp==max_sum)
			if(a[i]>max) max = a[i];
	}
	printf("%d",max);
	return 0;
}
