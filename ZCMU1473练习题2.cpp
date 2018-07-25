# ACM
ACM
/************************* 
	这道题很简单，就不用写方法了 
*************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,t1,t2;//t是温差,t1，t2分别是两个温度 
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&t1,&t2);
		printf("%d\n",abs(t1-t2));//求下绝对值 
	}
	return 0;
}
