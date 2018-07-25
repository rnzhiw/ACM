/******************************** 
	求两个数每个位置上的和 ： 
	把每隔数分离出来即可 
	这道题是水题很简单但当时脑子犯浑
	总结一下问题：
	1.数据输入问题，c语言效率高
	2.数据类型问题，但当时却想成大数问题 
********************************/ 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b;//long long 是long long int 的简写 
	long long sum=0;
	while(~scanf("%lld %lld",&a,&b))//注意一点的是这种输入方式最不容易超时 
	{								//以后都可以用这种方式做 
	sum=0;
	while(a)//进行循环分离操作 
	{
		sum=sum+a%10;
		a=a/10;
	}
	while(b)
	{
		sum=sum+b%10;
		b=b/10;
	}
	printf("%lld\n",sum);
	}
	return 0;
}
