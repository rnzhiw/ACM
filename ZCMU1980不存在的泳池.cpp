# ACM
ACM
/**************************
	这道题的解题方法：
		互质数在c语言里面的应用 
	1.现算出两个数的最大公约数
	2.将这两个数除以这个最大公约数
	3.分别都对2，3进行无限除法
	4.用n进行计数即可 
**************************/
#include<bits/stdc++.h>
using namespace std;
int a,b;//为两个数 
int gcd(int x,int y)//这个是求两个数之间的最大公约数的方法 ,应该当作模板来记
{					
	if(x==0) return y;//递归求法 
	return gcd(y%x,x);
}
int main()
{
	while(~scanf("%d%d",&a,&b))
	{
		int t=gcd(a,b);
		a/=t;
		b/=t;
		int sum=0;
		while(a%2==0)//将这两个数对2，3，不断取余，判断最后a是否等于b即可 
		{
			a/=2;
			sum++;
		}
		while(a%3==0)
		{
			a/=3;
			sum++;
		}
		while(b%2==0)
		{
			b/=2;
			sum++;c
		}
		while(b%3==0)
		{
			b/=3;
			sum++;
		}
		if(a==b) printf("%d\n",sum);
		else printf("-1\n");
	}
	return 0;
}
