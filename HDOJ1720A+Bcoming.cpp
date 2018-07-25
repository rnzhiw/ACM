# ACM
ACM
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b;
	int sum;
	while(scanf("%x %x",&a,&b)!=EOF)//他需要的是十六进制的话就直接输入十六进制数即可 
	{								//还有一点，刚才EOF没有写的话也是通不过的，会显示超时 
	
		sum=a+b;
		printf("%d\n",sum);//表示的话直接转换为十进制来表示 
	}
	return 0; 
} 
