# ACM
ACM
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,c1,r2,c2,r3,c3,ci=1;//分别是三个点的横纵坐标的输入 
    while(~scanf("%d%d%d%d%d%d",&r1,&c1,&r2,&c2,&r3,&c3))
    {
        int ans=max(abs(r2-r1),abs(c2-c1));
        int x1=r3-r1;//开始进行直线操作 
        int x2=r2-r1;
        int y1=c3-c1;
        int y2=c2-c1;
        if(x1*y2-x2*y1==0)//当r1~r3和r1~r2这两条直线重合的时候 
        {
            if(abs(x2)==abs(y2))//如果两条平行直线的斜率为1的时候 
            if(x1*x1+y1*y1<x2*x2+y2*y2)//如果那个断点在起点和终点的之间时 
                if(x1*x2>=0&&y1*y2>=0)
                ans+=1;
        }
        printf("Case %d: %d\n",ci++,ans);
    }
    return 0;
}
