# ACM
ACM
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int m;
	long long int a,b;
	long long int sum1,sum2;
	int i,j,k;
	cin>>m;
	for(i=1;i<=m;i++)
	{
		sum1=0;
		sum2=0;
		cin>>a>>b;
		for(j=1;j<a;j++)
		{
			if(a%j==0)
			{
				sum1+=j;
			}
		}
		for(k=1;k<b;k++)
		{
			if(b%k==0)
			{
				sum2+=k;
			}
		}
		if(sum1==b&&sum2==a)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	 } 
	 return 0;
}
