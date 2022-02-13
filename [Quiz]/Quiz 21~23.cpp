#include <stdio.h>

//문제 21번 
//int main(){
//	int a[10],b[10],aw=0,bw=0,p = 2;
//	for(int i = 0; i<10; i++)
//		scanf("%d",&a[i]);
//	for(int i = 0; i<10; i++)
//		scanf("%d",&b[i]);
//		
//	for(int i = 0; i<10; i++)
//	{
//		if(a[i]>b[i])
//		{
//			aw += 3;
//			p = 0;
//		}
//		else if(a[i]<b[i])
//		{
//			bw += 3;
//			p = 1;
//		}
//		else
//		{
//			aw += 1;
//			bw += 1;
//		}
//		
//	}
//	printf("%d %d\n",aw,bw);
//	if(aw>bw) printf("A");
//	else if(aw<bw) printf("B");
//	else 
//	{
//		if(p==0) printf("A");
//		else if(p==1) printf("B");
//		else printf("D");
//	}
//	return 0;
//}

//문제 22번 
//int main(){
//	int n,k,max = -2147000000,sum=0;
//	scanf("%d %d",&n,&k);
//	int a[n] = {0,};
//	for(int i = 0; i<n; i++)
//		scanf("%d",&a[i]);
//	for(int i = 0; i<k; i++)
//		sum += a[i];
//	max = sum;
//	for(int i = k; i < n; i++)
//	{
//		sum += (a[i]-a[i-k]);
//		if(sum > max) max = sum;
//	}
//	printf("%d\n", max);
//	return 0;
//} 

//문제 23번
int main(){
	int n, maxcnt=1, cnt=1, temp;
	scanf("%d",&n);
	scanf("%d",&temp);
	for(int i = 1; i<n; i++)
	{
		int a;
		scanf("%d",&a);
		if(temp<=a)
		{
			cnt++;
			if(maxcnt < cnt) maxcnt = cnt;
		}
		else cnt = 1;
		temp = a;
	}
	printf("%d", maxcnt);
	return 0;
}














 
