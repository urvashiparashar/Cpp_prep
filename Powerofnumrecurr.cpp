#include<bits/stdc++.h>
using namespace std;
int powerofnum(int a,int b)
{
    //base case
    if(b==0)
     return 1;
    if(b==1)
     return a;
    int ans=powerofnum(a,b/2); //for a poer b/2
    if(b%2==0)
    {
        return ans*ans;
    }
    else
    {
        return ans*ans*a;
    }
}

int main()
{
   int a=3,b=11;
   int power=powerofnum(a,b);
   cout<<power<<endl; 
   return 0;
}