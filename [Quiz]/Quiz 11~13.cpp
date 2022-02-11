#include <stdio.h>
#include <time.h>	

//문제 11번 
//int main(){
//	int a,n,cnt=0;
//	scanf("%d",&a);
//	for(int i = 1; i<=a; i++)
//	{
//		n = i;
//		while(n)
//		{
//			n = n/10;
//			cnt++;
//		}
//	}
//	printf("%d",cnt);
//	return 0;
//}

//문제 12번 with clock
//int main(){
//	clock_t start,end;
//	int a, sum = 0, cnt = 1, d = 9, res = 0;
//	double cl;
//	scanf("%d",&a);
//	start = clock();
//	
//	while(sum+d<a)
//	{
//		res+=(cnt*d);
//		sum+=d;
//		cnt++;
//		d*=10;
//	}
//	res+=((a-sum)*cnt);
//
//	for(int i = 1; i<=a; i++)
//	{
//		sum = i;
//		while(sum)
//		{
//			sum = sum/10;
//			res++;
//		}
//	}
//	
//	end = clock();
//	cl = ((double)end - start) / 1000;
//	printf("time : %lf\n",cl);
//	printf("result : %d",res);
//	return 0;
//}

//문제 13번 
int main(){
	char a[101];
	int cnt[10] = {0,}, b, res=0;
	scanf("%s",&a);
	
	for(int i = 0; a[i] != '\0'; i++)
	{
		b = a[i] - 48;
		cnt[b]++;
	}
	
	for(int i = 9; i>=0; i--)
		if(cnt[i] > cnt[res]) res = i;
	
	printf("%d",res);
	return 0;
}


