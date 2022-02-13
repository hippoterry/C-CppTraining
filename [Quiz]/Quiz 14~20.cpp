#include <stdio.h>

//문제 14번
//int reverse(int x){
//	int result = 0;
//	while(x)
//	{
//		result *= 10;
//		result += x%10;
//		x /= 10;
//	}
//	return result;
//}
//
//bool isPrime(int x){
//	if(x==1) return 0;
//	for(int i = 2; i < x; i++)
//		if(x%i==0) return 0;
//	return 1;
//}
//
//int main(){
//	int n,a[100],cnt = 0;
//	scanf("%d",&n);
//	for(int i = 1; i<=n; i++)
//	{
//		int tmp,bl;
//		scanf("%d",&tmp);
//		tmp = reverse(tmp);
//		bl = isPrime(tmp);
//		if(bl) a[cnt++] = tmp;
//	}
//	for(int i = 0; i<cnt; i++) printf("%d ",a[i]);
//	return 0;
//}

//문제 15번
//int main(){
//	int n,cnt = 1,j;
//	scanf("%d",&n);
//	for(int i = 3; i<n; i += 2)
//	{
//		for(j = 2; j*j<=i; j++)	
//			if(i%j==0) break;
//		if(i%j!=0) cnt++;
//	}
//	printf("%d",cnt);
//	return 0;
//}

//문제 16번 
//int main(){
//	bool p = true;
//	char a[100] = {0,}, b[100] = {0,}, A[52] = {0,}, B[52] = {0,};
//	scanf("%s",&a);
//	for(int i = 0; i < 100; i++)
//	{
//		if(a[i] >= 65 || a[i] <= 90)
//		{
//			a[i] -= 65;
//			A[a[i]]++;
//		}
//		else if(a[i] >= 97 || a[i] <= 122)
//		{
//			a[i] -= 71;
//			A[a[i]]++;
//		}
//	}
//	scanf("%s",&b);
//	for(int i = 0; i < 100; i++)
//	{
//		if(b[i] >= 65 || b[i] <= 90)
//		{
//			b[i] -= 65;
//			B[b[i]]++;
//		}
//		else if(b[i] >= 97 || b[i] <= 122)
//		{
//			b[i] -= 71;
//			B[b[i]]++;
//		}
//	}
//	for(int i = 0; i<52; i++)
//		if(A[i] != B[i]) p=false;
//	p==true?printf("YES"):printf("NO");
//	return 0;
//} 

//문제 17번 
//int main(){
//	int p[10] = {0,}, n;
//	scanf("%d",&n);
//	for(int i = 0; i < n; i++)
//	{
//		int a,b,k=0;
//		scanf("%d %d",&a,&b);
//		for(int j = 1; j <= a; j++) k += j;
//		p[i] = (k==b?1:0);
//	}
//	for(int i = 0;i < n; i++)
//		p[i]==1?printf("YES\n"):printf("NO\n");
//	return 0;
//}

//문제 18번
//int main(){
//	int n,m,t=0,res=0;
//	scanf("%d %d",&n,&m);
//	for(int i = 0; i<n; i++)
//	{
//		int a;
//		scanf("%d",&a);
//		if(a>m) t++;
//		else if(t>res)
//		{
//			res = t;
//			t = 0;
//		}
//	}
//	printf("%d",res);
//	return 0;
//}

//문제 19번 
//int main(){
//	int a[100] = {0,}, n, cnt = 0;
//	scanf("%d",&n);
//	for(int i = 0; i<n; i++)
//	{
//		int b;
//		scanf("%d",&b);
//		a[i] = b;
//	}
//	for(int i = 0; i<100; i++)
//	{
//		for(int j = i+1; j<100; j++)
//		{
//			if(a[i]<=a[j]) break;
//			if(j==99) cnt++;
//		}
//	}
//	printf("%d",cnt-1);
//	return 0;
//}

//문제 20번
int main(){
	int n,a[100],b[100];
	scanf("%d",&n);
	for(int i = 0; i<n; i++)
		scanf("%d",&a[i]);
	for(int i = 0; i<n; i++)
		scanf("%d",&b[i]);
	
	for(int i = 0; i<n; i++)
	{
		switch(a[i])
		{
			case 1:
				switch(b[i])
				{
					case 1: printf("D\n"); break;
					case 2: printf("B\n"); break;
					case 3: printf("A\n"); break;
				}
				break;
			case 2:
				switch(b[i])
				{
					case 1: printf("A\n"); break;
					case 2: printf("D\n"); break;
					case 3: printf("B\n"); break;
				}
				break;
			case 3:
				switch(b[i])
				{
					case 1: printf("B\n"); break;
					case 2: printf("A\n"); break;
					case 3: printf("D\n"); break;
				}
				break;
		}
	}
	return 0;
}












