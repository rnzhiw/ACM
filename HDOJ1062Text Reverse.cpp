# ACM
ACM
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
	int  t ;
	cin >> t ;
	getchar();//这个一定要有相当于有一个缓冲区 
	while(t--)
	{
		 string s ;
		 getline(cin,s);
		 int len = s.size();
		 s[len]=' ';
		 int pos = 0 ;
		 for ( int i=0 ; i<=len ;++i) 
		       	if ( s[i]==' ')
		        	{
		        		reverse(s.begin()+pos,s.begin()+i);//此处进行单个单词进行倒叙 
		        		pos = i + 1 ;
		        	}
		 	cout << s  << endl ;		        	  	
	}
	return 0 ;
}
