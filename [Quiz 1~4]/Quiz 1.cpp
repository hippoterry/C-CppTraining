#include <stdio.h>
#include <iostream>
using namespace std;

//���� 1�� 
//int main(){
//	int a,b,x;
//	scanf("%d %d",&a,&b);
//	for(int i = 0; i <= a; i+=b) x+=i;
//	printf("%d",x); 
//	return 0;
//}

//���� 1-1�� 
//int main(){
//	int a,b,x;
//	cin>>a>>b;
//	for(int i = 0; i <= a; i+=b) x+=i;
//	cout<<x;
//	return 0;
//}

//���� 2�� 
//int main(){
//	int a,b,x=0;
//	cin>>a>>b;
//	for(int i = a;i < b; i++)
//	{
//		x+=i;
//		cout<<i<<" + ";
//	}
//	cout<<b<<" = "<<x+b;
//	return x;
//}

//���� 3�� 
//int main(){
//	long long int a,x=0;
//	cin>>a;
//	cout<<"1";
//	for(int i = 2; i < a; i++)
//	{
//		if(a%i==0)
//		{
//			cout<<" + "<<i;
//			x+=i;
//		}
//	}
//	cout<<" = "<<x;
//	return 0;
//}

//���� 4�� 
//int main(){
//	int a,temp,min=1000,max=-1000;
//	cin>>a;
//	for(int i = 1; i<=a; i++)
//	{
//		cin>>temp;
//		if(temp<min) min = temp;
//		if(temp>max) max = temp;
//	}
//	cout<<max-min;
//	return 0;
//}

//���� 5�� 
//int main(){
//	char a[20],m;
//	scanf("%s", &a);
//	
//	if(a[7] == '1' || a[7] == '2') m = 120 - ((a[0]-48) * 10 + (a[1]-48));
//	else m = 20 - ((a[0] - 48) * 10 + (a[1]-48));
//	printf("%d ",m);
//	
//	if(a[7] == '1' || a[7] == '3') printf("M");
//	else printf("W");
//	
//	return 0;
//}

//���� 6��
int main(){
	char a[100];
	int b = 0, cnt=0;
	scanf("%s",&a);
	
	for(int i = 0; a[i] != '\0'; i++)
		if(a[i] >= '0' && a[i] <= '9') b = (b*10)+(a[i]-48);
	printf("%d\n",b);
	
	for(int i = 1; i<=b; i++) 
		if(b%i==0) cnt++;
	printf("%d",cnt);
	
	return 0;
} 
