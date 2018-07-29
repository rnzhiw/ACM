# ACM
ACM
#include<bits/stdc++.h>
using namespace std;
int main()
{
	double l,n,c,L;//l表示原长,n表示加热n度，c表示热膨胀系数，L表示膨胀以后的长度
	int t;//表示测试次数
	scanf("%d",&t);
	while(t--)
	{
		double left,mid,right,r,num;//其实这样的话就是把所求的弓形的高度看成是一个区间，然后left表示区间左端点，right表示区间右端点 
		scanf("%lf %lf %lf",&l,&n,&c);//然后输入原长，加热的几度，热膨胀系数 
		left=0;
		right=l/2;//将区间缩小，很容易看出高度一定没有L的一半，使计算量更加小
		while(right-left>1e-6)//注意，这一步一定要有一个精度控制 ，当小于这个临界值的时候便停止循环， 
		{
			mid=(left+right)/2;//将高度进一步缩小带入下面的两个式子中进行比较 
			r=l*l/8/mid+mid/2;//第一个式子当作定理 
			if(r*2*(asin(l/2/r))<L)//第二个式子当作条件进行判断 
			{
				left=mid;
			}
			else
			{
				right=mid;
			}
		}
		printf("Case %d: ",++num);
		printf("%.6f\n",mid);  //输出 mid left right 均可 
	}
}
