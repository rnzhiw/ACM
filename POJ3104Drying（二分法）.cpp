# ACM
ACM
/*****************************
这道题的具体思路就是： 
设某次二分出的一个值是mid：
1、对于一件a[i]值小于等于mid的衣服，直接晾干即可；
2、对于一件a[i]值大于mid值的衣服，最少的用时是用机器一段时间，晾干一段时间，设这两段时间分别是x1
和x2，那么有mid=x1+x2，ai<=k*x1+x2，解得x1>=（ai-mid）/(k-1) ，所以对（ai-mid）/(k-1)向上取整就是
该件衣服的最少用时。
******************************/
#include<bits/stdc++.h>
long long n,k;//n表示n件有水的衣服，k表示机器一分钟能够去掉多少水 
long long a[100010];//用来存储n件衣服上的水量,这道题的数据都要用long long类型，不然会wa报错 
bool dix(long long x)//此处的x为主函数的mid 
{
	long long i,time=0;
	if(k==1)//注意判断k是否为1，为1在下面会除以0，提交会RE ，这一部很容易忘记
		return true;
	for(i=0;i<n;++i)
	{
		if(a[i]>x)//如果找到一件衣服的水量比平均值大的话 
		{
			time+=(a[i]-x+k-1.8)/(k-1);//用向上取整函数ceil会WA，这里用K-2来向上取整
		}
	}
	return time>x;
}
int main()
{
	long long max;
	long long i;
	while(scanf("%lld",&n)!=EOF)
	{
		max=0;
		for(i=0;i<n;++i)
		{
			scanf("%lld",&a[i]);//把每一件衣服的含水量输进来 
			if(max<a[i])//挑选出含水量最大的衣服
				max=a[i];
		}
		scanf("%lld",&k);//输入机器一分干燥的水量 
		long long left=0,right=max,mid;
		while(left<right-1)//循环条件 
		{
			mid=(left+right)/2;
			if(dix(mid))
				left=mid;
			else
				right=mid;
		}
		printf("%lld\n",right);//在这道题中right实际上就是题目所要求的时间
	}
	return 0;
}
