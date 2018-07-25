# ACM
ACM
/*********************************
从本题获得 的结论有：
1.最大公因数递归函数的应用
2.当代码没问题的时候，可能是数据类型存在问题。通常都是int和long long的关系 
*********************************/ 
#include<bits/stdc++.h>
using namespace std;
int gtc(long long x,long long y)//求最大公因数的递归函数 
{
	if(x==0)
	{
		return y;
	}
	else
	{
		gtc(y%x,x);
	}
}
int main()
{
	long long a,b,c,d,x,t,s;//a,b,c分别三人的运动周期，x用来计数什么时候相遇 
	scanf("%lld %lld %lld",&a,&b,&c);
	t=gtc(a,b);//t表示a和b的最大公因数 
	d=a*b/t;//d表示a和b的最小公倍数
	s=gtc(d,c);//s表示d与c的最小公倍数 
	x=d*c/s;//最后相遇的日子 
	printf("%lld\n",x);
	return 0;
}                     
