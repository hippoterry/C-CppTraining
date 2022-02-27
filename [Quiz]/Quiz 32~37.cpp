#include <stdio.h>

//31 (not cleared)

//int main(){
//	int a=0,b=0,c = 0;
//	
//	scanf("C%dH%d",&a,&b);
//	
//	if(a == 0) a = 1;
//	if(b == 0) b = 1;
//	
//	printf("%d\n",a);
//	printf("%d\n",b);
//	c = 12*a + b*1;
//	printf("%d\n",c);
//	return 0;
//}

//32
//int main(){
//	int n, temp1,temp2;
//	scanf("%d",&n);
//	int a[n];
//	for(int i = 0; i < n; i++) scanf("%d",&a[i]);
//	
//	for(int i = 0; i < n; i++)
//	{
//		temp1 = a[i];
//		for(int j = i+1; j < n; j++)
//		{
//			if(temp1>a[j])
//			{
//				temp2 = a[j];
//				a[j] = temp1;
//				temp1 = temp2;
//			}
//		a[i] = temp1;
//		}
//	}
//	
//	for(int i = 0; i < n; i++) printf("%d ",a[i]);
//	return 0;
//}

//33
//int main(){
//	int temp1, temp2,n,o = 1;
//	scanf("%d",&n);
//	int a[n];
//	for(int i = 0; i < n; i++) scanf("%d",&a[i]);
//	
//	for(int i = 0; i < n; i++)
//	{
//		temp1 = a[i];
//		for(int j = i+1; j < n; j++)
//		{
//			if(temp1<a[j])
//			{
//				temp2 = a[j];
//				a[j] = temp1;
//				temp1 = temp2;
//			}
//		a[i] = temp1;
//		}
//	}
//	
//	for(int k = 1; k < n; k++)
//	{
//		if(a[k] != a[k-1]) o+=1;
//		if(o==3)
//		printf("%d",a[k]);
//		break;
//	}
//	return 0;
//}

//34
//int main(){
//	int n,a[200],temp, j;
//	scanf("%d",&n);
//	for(int i = 0; i < n; i++) scanf("%d",&a[i]);
//	for(int i = 0; i < n; i++)
//	{
//		for(j = 0; j < n-1; j++)
//		{
//			if(a[j]>a[j+1])
//			{
//				temp = a[j+1];
//				a[j+1] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//	for(int i = 0; i < n; i++) printf("%d ",a[i]);
//	return 0;
//}

//35
//int main(){
//	int n,a[200], m[100] = {0,}, p[100] = {0,}, mc = 0, pc = 0;
//	scanf("%d",&n);
//  
//	for(int i = 0; i<n; i++) scanf("%d",&a[i]);
//	
//	for(int i = 0; i<n; i++)
//	{
//		if(a[i] < 0) m[mc++] = a[i];
//		else p[pc++] = a[i];
//	}
//	
//	for(int i = 0; m[i] != 0; i++)
//		printf("%d ",m[i]);
//	for(int i = 0; p[i] != 0; i++)
//		printf("%d ",p[i]);
//		
//	return 0;
//}

//36
//int main(){
//	int n, temp, a[100],j;
//	scanf("%d",&n);
//	for(int i = 0; i<n; i++) scanf("%d",&a[i]);
//	
//	for(int i = 1; i<n; i++)
//	{
//		temp = a[i];
//		for(j = i-1; j>=0; j--)
//		{
//			if(a[j]>temp) a[j+1] = a[j];
//			else break;
//		}
//		a[j+1] = temp;
//	}
//	
//	for(int i = 0; i < n; i++) printf("%d ",a[i]);
//	return 0;
//}

//37
int main(){
	bool p;
	int s,n,temp,j;
	scanf("%d %d",&s,&n);
	int a[s]={0,};
	for(int i = 0; i<n; i++)
	{
		p = false;
		scanf("%d",&temp);
		for(j = 0; j < s; j++)
			if(temp == a[j]) p = true;
		
		if(p == true)
			for(int k = j; k > 0; k--) a[k] = a[k-1];
		else
			for(int k = s-1; k > 0; k--) a[k] = a[k-1];
		
		a[0] = temp;
		
	for(int i = 0; i<s; i++) printf("%d ",a[i]);
	printf("\n");
	}
	
	printf("result : ");
	for(int i = 0; i<s; i++) printf("%d ",a[i]);
	return 0;
}















