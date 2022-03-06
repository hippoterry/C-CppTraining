#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
//38
//int main(){
//	int n,a[100],b[100] = {0,},temp;
//	scanf("%d",&n);
//	for(int i = 0; i<n; i++)
//		scanf("%d",&a[i]);
//	for(int i = n-1; i>=0; i--)
//	{
//		temp = i;
//		for(int j = 0; j < a[i]; j++)
//		{
//			b[temp] = b[temp+1];
//			temp++;
//		}
//		b[temp] = i;
//	}
//	for(int i = 0; i<n; i++)
//		printf("%d ",b[i]+1);
//	return 0;
//}

//39
//int main(){
//	int n,m,a[100],b[100],c[200],p1=0,p2=0,p3=0;
//	scanf("%d",&n);
//	for(int i = 0; i<n; i++)
//		scanf("%d",&a[i]);
//	scanf("%d",&m);
//	for(int i = 0; i<m; i++)
//		scanf("%d",&b[i]);
//	
//	while(p1<n && p2<m)
//	{
//		if(a[p1]<b[p2]) c[p3++] = a[p1++];
//		else c[p3++] = b[p2++];
//	}
//	while(p1<n) c[p3++] = a[p1++];
//	while(p2<m) c[p3++] = b[p2++];
//	
//	for(int i = 0; i<n+m; i++)
//		printf("%d ",c[i]);
//	return 0;
//}

//40
//int main(){
//	int n,m,p=1,temp;
//	scanf("%d",&n);
//	int a[n+1];
//	for(int i = 1; i<=n; i++)
//		scanf("%d",&a[i]);
//	scanf("%d",&m);
//	int b[m+1], c[n+m+2];
//	for(int i = 1; i<=m; i++)
//		scanf("%d",&b[i]);
//	
//	for(int i = 1; i<=n; i++)
//	{
//		for(int j = 1; j<=m; j++)
//		{
//			if(a[i]==b[j]) c[p++] = a[i];
//		}
//	}
//	for(int i = 1; i < p; i++)
//	{
//		for(int j = 1; j < p-1; j++)
//		{
//			if(c[j]>c[j+1])
//			{
//				temp = c[j+1];
//				c[j+1] = c[j];
//				c[j] = temp;
//			}
//		}
//	}
//	for(int i = 1; i < p; i++)
//		printf("%d ",c[i]);
//	return 0;
//}

//42
int main(){
	int n,m,mid,lt=0,rt=0;
	scanf("%d %d",&n,&m);
	vector<int> a(n);
	rt = n-1;
	for(int i = 0; i<n; i++)
		scanf("%d",&a[i]);
	sort(a.begin(),a.end());
	while(lt<=rt)
	{
		mid = (lt+rt)/2;
		if(m==a[mid]) break;
		else if(m<a[mid]) rt = mid-1;
		else lt = mid+1;
	}
	printf("%d",mid+1);
	return 0;
}








