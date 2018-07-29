# ACM
ACM
#include<bits/stdc++.h>  
using namespace std;  
int main()  
{  
    int n;  
    while(scanf("%d",&n)!=EOF)//这个n表示第n项  
    {  
        if(n%12==0)//能被12整除 
        {  
            printf("YES\n");  
        }  
        else 
        {  
            if(n%4==0)//n被4整除的话，表示第n项能被3整除 
            {  
                printf("3\n");  
            }  
            else if(n%6==0)//n被6整除的话，表示第n项能被4整除 
            {  
                printf("4\n");  
            }  
            else//都不满足的话，就输出NO 
            {  
                printf("NO\n");  
            }  
        }  
    }  
    return 0;  
}  
