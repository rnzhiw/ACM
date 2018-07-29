# ACM
ACM
/*******************************
整理一下这道题二分法的思路：用心理解
1.掌握bool函数的写法，这个是用来被求区间最小值的，
函数先枚举了mid进行操作，如果可以的话，那么左边界缩小 ，如果不可以的话，右边界缩小
2.主函数里面输入好数据后，直接引用函数就可以了
********************************/
#include<bits/stdc++.h>
using namespace std;
const int maxn = 100010;
int s[maxn];//表示有100005个牛棚的距离坐标 
int n,m;//n表示牛棚的数量，m表示奶牛的数量
bool ok(int x)//这个函数是二分法的模板函数。非常好用，但如果是第一次用的话，可能会比较难想到，也挺难理解的 
{
    int cnt = 1;//cnt用来计数可以放下的牛的数量，和真正的牛的数量比较作判断
    int tmp = s[0];//这个tmp变量就是为了s数组在i变化之后用的 
    for(int i=1;i<n;i++)
	{
        if(s[i]-tmp >= x) //这里的x参数实际上就是主函数里面所写的mid 
		{
            cnt ++;//一满足上面的if语句，就立马把奶牛放进来，cnt++ 
            tmp = s[i];//然后随即也将tmp函数重新进行赋值
        }			   
    }
    return cnt >= m;//如果最后奶牛的个数 
}
int main()
{
    scanf("%d%d",&n,&m);//把牛棚和奶牛的数量都输入进来 
    for(int i=0;i<n;i++) 
	{
		scanf("%d",&s[i]);	
	}
    sort(s,s+n);
	int left = 0;//把左边界标记出来
    int right=s[n-1]-s[0];//这个是右边界 
    while(right>left) 
	{
        int mid=left+(right-left+1)/2;//查找中间位置xi是在哪个位置左右 
        if(ok(mid))//如果满足了这个条件的话，就是进一步缩小范围，直接把left放到mid那里去做了 
		{
			left=mid;	
		}
        else//如果不满足条件的话，其实就是类似于数轴来说的话，就是太靠右了，因此，要将right往左移动，使之范围变小 
		{
			right=mid-1;	
		}
    }
    printf("%d\n",left);//直接打印一下左边界。 
    return 0;
}
