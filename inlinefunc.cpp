#include<bits/stdc++.h>
using namespace std;
inline int getmax(int& a,int& b)
{
    return (a>b)?a:b; //tertiary condn operator
}
int main()
{
     int a=1,b=2;
     int ans=0;
     ans=getmax(a,b);
     a=a+1;
     b=b+2;
     ans=getmax(a,b);
     cout<<ans;
     return 0;
}