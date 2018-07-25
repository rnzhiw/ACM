# ACM
ACM
/*********************** 
	这是一道水题：
	只要满足nx<=yz这个逻辑即可，然后n++上去 
***********************/
#include<stdio.h>
int main()
{
	int t,x,y,z,i;
	int n=0;
	scanf("%d",&t);
	while(t--)//t组数据 
	{
		n=0;
		scanf("%d %d %d",&x,&y,&z);
		if(y==0)//当y=0的时候的情况不能忘记，不然就是WA报错了 
		{
	
			printf("%d\n",n);
		}
		else
		{
			while(n*x<=y*z)//然后就是比较简单的业务逻辑的表达 
			{			   //nx<yz;
				n++;
			}
			printf("%d\n",n);
		}
	}
	return 0;
}
