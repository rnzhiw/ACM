# ACM
ACM
/********************************
本题解题方法：
多重背包+二进制优化方法
可结合图表来看，网页链接：https://blog.csdn.net/hearthougan/article/details/53869671； 
*******************************/
#include<bits/stdc++.h>
using namespace std;
const int maxN=300;//药品的最大种类 
const int maxW=500000;//物品栏的最大容量 
const int maxC=500;//单个药品的最大数量 
const int maxV=10000;//单个药品的最大价值 
int dp[maxW+5];//背包的容量数组 
long long count;//用来计数可以装几个物品 
long long Value[maxN*maxC+5];//价值总量的数组 
long long size[maxC*maxN+5];
int main()
{
    int N,W;
    while(scanf("%d %d",&N,&W)!=EOF)//输入药品的数量和总容量 
    {
        int count=0;//用来计数可以放下几个物品 
        memset(dp,0,sizeof(dp));//容量数组清空 
        for(int i=0; i<N; i++)//二进制优化 
        {
            int wi,vi,ci;
            scanf("%d%d%d",&wi,&vi,&ci);//输入单个药品体积，价值，和个数 
            for(int j=1; j<=ci; j<<=1)//以两倍的增速循环，如7分解成1，2，4 
            {
                Value[count]=j*vi;//每次的价值 
                size[count]=j*wi;//每次的容量 
                ci-=j;//物品栏剩余容量 
                count++;
            }
            if(ci>0)
            {
                Value[count]=ci*vi;//当前价值 
                size[count]=ci*wi;//当前容量 
                count++;
            }
        }
        for(int i=0; i<count; i++)//背包的方法，先便利选的几种药品 
        {
            for(int j=W; j>=size[i]; j--)//然后从最大物品容量开始到可以装下的容量， 
            {
                if(dp[j] < dp[j-size[i]] + Value[i])//进行选择 
                    dp[j]=dp[j-size[i]]+Value[i];
            }
        }
        printf("%d\n",dp[W]);//dp[w]实际上就是画出的表格的最下角那个数字，就是背包的最大容量 
    }
    return 0;
}
