# ACM
ACM
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,k,sum,a[1000],i,j;//n表示要输入几个数字，k表示k是n的因子，且隔k个元素都是相等的，sum用来求至少需要改变的次数。 
    while(~scanf("%d %d",&n,&k))
    {
        int b[1001]={0};//b数组记录位置1的数的个数 
		int c[1001]={0};//c数组记录位置2的数的个数 
        x=n/k;//分成了x个序列
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);//把原始所有数据都输入 
        for(i=0;i<k;i++)//其实就是每k个为一个循环类似的
        {
            for(j=0;j<x;j++)//其实就是相当于每个序列中有x个数 
            {
                if(a[i+j*k]==1)
				{
					b[i]++;//只用统计k个数当中的数字为1的记录		
				}
                else
				{
					c[i]++;//c数组记录该位置的数字为2的个数
				}
            }
        }
        sum=0;
        for(i=0;i<k;i++)
        {
            if(b[i]<c[i]){
                sum=sum+b[i];//加上小的那一块 
        }
            else{
				sum=sum+c[i];
			}
        }
        printf("%d\n",sum);
    }
    return 0;
}
