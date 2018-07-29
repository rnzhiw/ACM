# ACM
ACM
/*********************************
解决关于输入n的阶乘末尾有几个零，输出满足条件的n的最小值问题，所以要比常规思路反方向考虑。
用普通循环的方法很有可能就会超时，所以直接用二分来做就可以了。 
1.构造出facs函数:
这个函数其实就是求一个数n的阶乘后面有几个零的函数
2.然后就是在一个比较大的范围内找数字符合条件的，用二分找比较简单
*********************************/ 
#include<bits/stdc++.h>
long long facs(long long n)//第一次做这种题目可能会比较难想 
{
    long long num=0;
    long long b=1;
    while(1)
    {
        b*=5;
        num+=n/b;
        if(b>n)//其实这一句话就是保证了b不会大于n
            break;
    }
    return num;//这里返回的就是一个数n的阶乘的末尾的零的个数 
}
int main()
{
    long long p,i;//这里的p实际上就是输入的n阶乘后面的有几个零的值， 
    int flag;//这个flag实际上就是为了进行标记的，如果没有满足的n就输出一大串的字符，其实就是为了输出字符串而引入的 
    while(~scanf("%lld",&p))//输入n的阶乘后面有几个零 
    {
        flag=0;
        long long left=5;//左边界是5，这里将范围充分扩大,一般用二分法的话就是把范围变大 
        long long right=10000000000;//右边界为一个很大的数 
        while(left<right)
        {
            long long mid=(left+right)/2;
            long long q=facs(mid);//中间位置
            if(p==q)//如果查到相等的零点个数的时候 
            {
                while(mid%5!=0)
                    mid--;//要得到最小的数
                printf("%lld\n",mid);
                flag=1;//成功后flag就变成1了 
                break;
            }
            if(q>p)//如果输入的零的个数偏小的，就改变右边界的端点 
                right=mid-1;
            else
                left=mid+1;//否则就是改变左边的边界情况
        }
       if(flag==0)//如果没有任何数字满足的话，就输出字符 
        printf("No solution\n");
    }
    return 0;
}
