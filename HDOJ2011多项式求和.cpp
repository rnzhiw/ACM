# ACM
ACM
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int m,n;
	double sum=0.0;//此处注意的是double定义以后都要加小数点一位 
	int i,j;
	cin>>m;
	for(i=1;i<=m;i++)
	{
		sum=0.0;
		cin>>n;
		for(j=1;j<=n;j++)
		{
			if(1&j)//当j为奇数的时候执行该括号内的内容，反之，执行另一个括号内的内容 
			{
				sum=sum+(double)1.0/j;//此处也要加上double 
			}
			else
			{
				sum=sum-(double)1.0/j;
			}
		}
		printf("%.2lf\n",sum);
	}
	return 0;
}
