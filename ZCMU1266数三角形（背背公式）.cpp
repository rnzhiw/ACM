# ACM
ACM
/**********************
这道题要熟练运用公式：具体见笔记 
**********************/
#include<stdio.h>
#include<math.h>
int main()
{
	long long  k,n;//k用来计数三角形的个数,n表示为被划分为了n等分。 
	while(scanf("%lld",&n)!=EOF)
	{
		if(n%2==0)//n是偶数的情况下 
		{
			k=n*(n+2)*(2*n+1)/8;
		}
		else if(n%2==1)//n是奇数的情况下 
		{
			k=(n+1)*(2*n*n+3*n-1)/8;
		}
		printf("%lld\n",k);
	}	
	return 0;
}
