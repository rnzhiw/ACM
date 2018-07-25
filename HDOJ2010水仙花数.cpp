# ACM
ACM
#include<iostream>
using namespace std;
int main()
{
        int m,n,flag,time=1;
        int x,y,z;
        while(cin>>m>>n){
                flag=0;//此处记为有无水仙花树用 
                for(int i=m;i<=n;i++){
                        x=i/100;y=i/10%10;z=i%10;
                        if(x*x*x+y*y*y+z*z*z==i){
                                flag=1;
                                if(time==1){
                                        cout<<i;
                                        time++;//此处的time是用来防止输出一个前置空格 
                                }
                                else
                                        cout<<" "<<i;//当大于等于第二个数后才开始输出空格 
                                }
                        if(i==n&&flag==1)       cout<<endl;
                }
                if(flag==0)//判别无水仙花树的情况 
                        cout<<"no"<<endl;
                time=1;
        }
        return 0;
}
