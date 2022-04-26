#include<bits/stdc++.h>
using namespace std;
bool checkpal(string str,int s,int e)
{
    
    if(s>e)
     return true;
    if(str[s]!=str[e])
     return false;
    else
    {
        return checkpal(str,s+1,e-1);
    }
}

int main()
{
    
   string str1="abbcbba";
   bool ans=checkpal(str1,0,str1.length()-1);
   if(ans)
   {
       cout<<"Yes";
   }
   else
   {
       cout<<"No";
   }
    return 0;
}