# ACM
ACM
/*******************************
这一道题目是一个找规律的题目：
这道题实际上找到规律后就会非常简单：
1.图形是基于蛇形的
2.每一行呈1，2，3，4，5等排列
3.观察奇偶行的规律，分子分母分别成相反方向变化 
******************************/ 
#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm> 
using namespace std;
int m=10000;//m表示最多的行数 
int main()
{
	int i,n,t,j,s;//n表示输进来的数字,t用来记在哪一行 
	while(scanf("%d",&n)!=EOF)
	{
		s=0;
		t=0;
		for(i=0;i<=m;i++)
		{
			if(n>i*(i+1)/2&&n<=(i+1)*(i+2)/2)//第几行的确定 
			{
				t=i+1;//t表示数字在第i行
				break;
			}
		}
		s=n-(t-1)*t/2;//s表示数字在第i行第几个,也就是第t行
		if(t%2==0)//如果i在第偶数行 
		{
			printf("TERM %d IS %d/%d\n",n,s,t-s+1);
		}
		else if(t%2==1)//如果i在奇数行 
		{
			printf("TERM %d IS %d/%d\n",n,t-s+1,s);
		}
	}
	return 0;
}
