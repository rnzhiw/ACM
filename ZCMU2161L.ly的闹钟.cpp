# ACM
ACM
/***********************
这也是一道基础的题目 
************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,h,m,s;//t是总时间，h表示小时,m表示分钟，s表示秒 
	while(~scanf("%d",&t))
	{
		if(t>=0&&t<=59)//涉及到秒的情况 
		{
			h=0;
			m=0;
			s=t;
			printf("%d:%d:%d\n",h,m,s);
		}
		if(t>=60&&t<=3599)//涉及到分和秒的情况 
		{
			h=0;
			m=t/60;
			s=t-m*60;
			printf("%d:%d:%d\n",h,m,s);
		}
		if(t>=3600&&t<=86399)//涉及到小时，分，和秒的情况 
		{
			h=t/3600;
			m=(t-3600*h)/60;
			s=t-3600*h-60*m;
			printf("%d:%d:%d\n",h,m,s);
		}
	}
	return 0;
}
