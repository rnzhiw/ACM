# ACM
ACM
/***********************
输出第k小的数，直接把数组排列一下就可以了，用sort函数 
***********************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[2005];
	int n,k;//n是有n个数，k是第k小的数,1<=k<=n<=2000
	int i;
	while(scanf("%d %d",&n,&k)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+n); 
		printf("%d\n",a[k-1]);//只有这里需要注意一下 
	}
	return 0;
} 
