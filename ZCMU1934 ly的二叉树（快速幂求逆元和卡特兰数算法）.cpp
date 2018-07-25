# ACM
ACM
/**********************
此题求有n个结点的树有多少种的形态
（大数取模求逆元） 
1.运用卡特兰数的递归算法
2.运用快速幂求逆元 
**********************/
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007//在输出大数的时候就要取模 
int ans[1000000];//定义一个输出数组 
long long int quickpow(long long int a,long long int b)//快速幂运算 
{
	a=a%mod;//取模 
	long long int res=1;//res用于记录结果 
	for(;b;b>>=1)
	{
		if(b&1)//如果二进制末尾是奇数，则执行下面的操作 
		{
			res=(res*a)%mod;
		}
		a=(a*a)%mod;//每次进行记录，用于下一个循环的累乘 
	}
	return res;//求好的幂 
}
long long int inv(long long int a,long long int b)//求逆元 
{
	return quickpow(a,b-2);
}	
int main()
{
	long long int n, i;//n是输入的数 
	ans[0] = 0; ans[1] = 1;//ans数组进行统计 
	for (i = 2; i <= 1000000; i++)
	{
		ans[i]=ans[i-1] * (4 * i-2) % mod*inv(i+1, mod) % mod;//卡特兰数的递归表示 
	}
	while(scanf("%lld",&n)!=EOF)//输入n个结点，直接输出二叉树的多种形态 
	{
		printf("%d\n", ans[n]);
	}
	return 0;
}
