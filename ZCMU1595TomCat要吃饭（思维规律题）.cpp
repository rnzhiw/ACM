# ACM
ACM
/**********************************
这是一道规律规律性非常强的题目：
1.主要从对角线出发，观察一下对角线的规律，n=(num)*(num-1)+1；
2.然后观察第奇数行和偶数行的规律，写下来就好；
3.还有一点比较重要的就是千万不要忘了第一步num的确定，即在第几行 
**********************************/ 
#include<bits/stdc++.h>
int main()
{
   double s,n;
   long long num,a,b;//num表示目前该数字n在第几层,a表示在横向第几层，b表示在竖向第几层 
   while(scanf("%lf",&n)==1&&n!=0)//当程序输入n的时候也就停止了 
   {
       	num=sqrt(n);//确定给出数字在第几层         
   	   	if(num<sqrt(n))
		{
			num+=1;//如果开方后不是整数说明要后移一层
		}
  		if(num%2==0)//当n在偶数层的时候 
  		{
  			if(n==num*(num-1)+1)//如果在对角线上直接输出num num
          	printf("%lld %lld\n",num,num);
      		else if(n>num*(num-1)+1)//不在对角线上的是有规律的，根据大眼睛观察法可以找到规律
       		{
        		b=num-(n-num*(num-1)-1);
          		printf("%lld %lld\n",num,b);//第偶数行横向不变，向下变大 
       		}
       		else
       		{
           		a=num-(num*(num-1)+1-n);//横着来看 
           		printf("%lld %lld\n",a,num);
       		}
  		}
   		else//当n是奇数的时候，奇数的时候递变顺序刚好相反 
   		{
    	    if(n==num*(num-1)+1)//第一件事都是先将对角线进行打印 
    	    {
    	    	printf("%lld %lld\n",num,num);//相当于来说这个对角线其实就是一个矩阵的主对角线 
			}
        	else if(n>num*(num-1)+1)//当如果不在对角线的情况的时候，也是分两边进行讨论的 
       		{
       		 	b=num-(n-num*(num-1)-1);
        		printf("%lld %lld\n",b,num);
       		}
       		else
       		{
        	    a=num-(num*(num-1)+1-n);
           	    printf("%lld %lld\n",num,a);
       		}
   	 	}
   }
    return 0;
}
 
