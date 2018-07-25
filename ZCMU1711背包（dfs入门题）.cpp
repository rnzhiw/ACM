# ACM
ACM
/************************
这个是dfs的基础题，用来入门是比较好的 
深度搜索，递归运用，直到能够刚好装满背包 
模板：

void dfs(变量){
    if(超出阈值){    //判断边界
        return;
    }
    if(条件成立){
        ans++;
        return;
    }
    for(int i=s;i<n;i++){    //尝试每一种可能性
        dfs(step+1);            //继续下一步
    }
    return;
｝ 
*************************/
#include<bits/stdc++.h>
using namespace std;
int n,m;//n是一共有多少个物品，m表示背包容量
int a[30];//最多有20个物品，因此定义了长度为30的数组 
int ans=0;//ans用来计数方案的个数 
void dfs(int ok,int index)//ok指的是容量，index指的就是下标 
{
	if(ok==0)
	{
		ans++;
		return;
	}
	if(ok<0||index>n)//当容量不够或者是所有的东西都已经装进去以后（也就是说背包不能够装满） 
	{
		return;//直接返回 
	}
	else//这是背包还没装满还可以继续装的情况 
	{	
		dfs(ok-a[index],index+1);//这个时候递归就出来了，把剩余容量计算一下，然后就继续增加其下标 
		dfs(ok,index+1);//跟上面一部的道理差不多
	}
}
int main()
{
	while(~scanf("%d%d",&n,&m))
	{
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);	
	}
	ans=0;
	dfs(m,1);//这里的index就从1开始
	printf("%d\n",ans);
	}
} 
