# ACM
ACM
/***********************
这道题看起来可能会非常的难：
其实这道题的题意是能够找出将原来输入的字符串扩大到原来的两倍即可；
然后将这个两杯数组进行转置：这一步比较重要 
利用c++里面的函数strstr(str1,str2),str1放置大的子串（两倍数组），而str2放置比较小的子串（单倍数组）
最后判断一下strstr的返回值即可
***********************/ 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string str1,str2;
	cin>>n;
	while(n--)
	{
		cin>>str1;//定义输入的数组 
		str2=str1+str1;//将数组扩大两倍 
		reverse(str2.begin(),str2.end());//将两倍数组进行转置 
		printf("%s\n",strstr(str2.c_str(),str1.c_str())?"YES":"NO");//诺str1是str2的子串，则输出YES，反之，输出NO； 
	}	
} 


