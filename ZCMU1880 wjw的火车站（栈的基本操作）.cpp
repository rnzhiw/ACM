# ACM
ACM
#include<bits/stdc++.h>
using namespace std;
char a[100000],b[100000];//a数组是用来存放进站的序列号的，b是用来存放出站的序列号的 
int p[200000];//p数组实际上就是为了下面的判断所使用的，如果是进站的话，那就是0.出站的话就是1， 
stack<char> s;///建立一个栈
int main()
{
    int cut=0;//cut用来计数这是第几次输入数据 
    int n;//这个n表示有几个火车在进出 
    while(~scanf("%d %s %s",&n,a,b))//输入进入情况 
	{                               
        cut++;
        memset(p,0,sizeof(p));//数组初始化
        int sum=0;
        int len=strlen(a);
        int len2=strlen(b);
        int flag=0;
        for(int i=0;i<len;i++)
		{
           s.push(a[i]);///将元素放入栈中；
           p[sum]=0;
           sum++;//为了求入栈和出栈的总和次数 
           while(!s.empty()/*判断是否为空*/&&s.top()==b[flag]&&flag<len2/*判断栈顶元素*/){///如果栈顶元素和当前要取出的元素一样就取出，直到不一样；
                flag++;
                s.pop();//取出栈顶的元素 
                p[sum]=1;
                sum++;
            }
        }
        printf("Case #%d: ",cut);
        if(flag!=len2) 
		{
			printf("No.\n");//如果取出的元素的数量和原来的数量不一样的话，那么说明不能达到 
		}
        else
		{
            printf("Yes.\n");
            for(int i=0;i<sum;i++)//这个时候p数组就变得非常有用了
			{ 
                if(p[i]==0)
				{
					printf("in\n");
				} 
                else
				{
                    printf("out\n");
                }
            }
        }
    }
    return 0;
}
