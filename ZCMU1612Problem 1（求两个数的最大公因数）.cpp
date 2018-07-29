# ACM
ACM
#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y)//这个求公因数的函数应该要掌握的，最好能够完全的记下来 
{
	if(x==0)
	{
		return y;
	}
	else
	{
		gcd(y%x,x);
	}
}
int main()
{
	int a,b,c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		c=gcd(a,b);
		printf("%d\n",c);
	}
	return 0;
}
