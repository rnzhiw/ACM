# ACM
ACM
/*********************
这是一道水题，次数等于边长相乘再减一即可 
*********************/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long t,m,n;//注意是10的9次方的乘积最好直接用 
	long long k;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&m);
		k=n*m-1;
		printf("%lld\n",k);
	}
	return 0;
}
