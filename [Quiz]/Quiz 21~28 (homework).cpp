#include <stdio.h>
#include <math.h>

// 21
//int main(){
//	int a[10], b[10], aw=0, bw=0, p = 2;
//	for(int i = 0; i < 10; i++) scanf("%d",&a[i]);
//	for(int i = 0; i < 10; i++) scanf("%d",&b[i]);
//	for(int i = 0; i < 10; i++)
//	{
//		if(a[i] > b[i])
//		{
//			aw += 3;
//			p = 0;
//		}
//		else if(a[i] < b[i]) 
//		{
//			bw += 3;
//			p = 1;
//		}
//		else 
//		{
//			aw++;
//			bw++;
//		}
//	}
//	printf("%d %d\n",aw,bw);
//	if(aw>bw) printf("A");
//	else if(aw<bw) printf("B");
//	else if(p == 0) printf("A");
//	else if(p == 1) printf("B");
//	else printf("D");
//	return 0;
//}

//22
//int main(){
//	int n,k,temp = 0,sum = -2147000000;
//	scanf("%d %d",&n,&k);
//	int a[n];
//	for(int i = 0; i<n; i++)
//	{
//		scanf("%d",&a[i]);
//		if(i-k-1 >= 0)
//		{
//			for(int j = i-k; j < i; j++) temp += a[j];
//			if(temp > sum) sum = temp;
//		}
//		temp = 0;
//	}
//	printf("%d",sum);
//	return 0;
//}

//23
//int main(){
//	int n,a=0,temp = -2,prv=-1,rt = 0;
//	scanf("%d",&n);
//	for(int i = 0; i<n; i++)
//	{
//		prv = temp;
//		scanf("%d",&temp);
//		if(temp >= prv) a++;
//		else if(a > rt)
//		{
//			rt = a;
//			a = 1;
//		}
//		else a = 1;
//	}
//	if(a > rt) rt = a;
//	printf("%d",rt);
//	return 0;
//}

//24
//int main(){
//	bool p = true;
//	int n,a,temp,jmp[100]= {0,};
//	scanf("%d",&n);
//	scanf("%d",&temp);
//	for(int i = 1; i<n; i++)
//	{
//		scanf("%d",&a);
//		jmp[i] = abs(a-temp);
//		temp = a;
//	}
//	for(int i = 1; i<n; i++)
//		for(int j = 1; j<n; j++)
//		{
//			if(i == j) continue;
//			if(jmp[j] == jmp[i]) p = false;
//		}
//
//	p==true?printf("YES"):printf("NO");
//	return 0;
//}

//25
//int main(){
//	int a[200], b[200], n;
//	scanf("%d", &n);
//	for(int i=1; i<=n; i++)
//	{
//		scanf("%d", &a[i]);
//		b[i]=1;
//	}
//	
//	for(int i=1; i<=n; i++)
//		for(int j=1; j<=n; j++)
//			if(a[j]>a[i]) b[i]++;
//			
//	for(int i=1; i<=n; i++)
//		printf("%d ", b[i]);
//		
//	return 0;
//}

//26
//int main(){
//	int n,a[10000], b[10000] = {0,};
//	scanf("%d",&n);
//	for(int i = 0; i < n; i++) scanf("%d",&a[i]);
//	for(int i = 0; i < n; i++)
//		for(int j = i; j >= 0; j--)
//			if(a[i] <= a[j]) b[i]++;
//	for(int i = 0; i < n; i++) printf("%d ",b[i]);
//	return 0;
//}

//27
//int main(){
//	int a,temp,prm[1000]={0,},s;
//	scanf("%d",&a);
//	for(int i = 2; i<=a; i++)
//	{
//		temp = i;
//		s = 2;
//		while(temp > 1)
//		{
//			if(temp%s==0)
//			{
//				prm[s]++;
//				temp /= s;
//			}
//			else s++;
//		}
//	}
//	printf("%d! = ",a);
//	for(int i = 2; i<=a; i++)
//		if(prm[i]) printf("%d ",prm[i]);
//	return 0;
//}

//28
int main(){
	int a,temp,cnt=0;
	scanf("%d",&a);
	for(int i = 2; i<=a; i++)
	{
		temp = i;
		while(temp%5==0)
		{
			if(temp%5==0)
			{
				cnt++;
				temp /= 5;
			}
		}
	}
	printf("%d",cnt);
	return 0;
}









