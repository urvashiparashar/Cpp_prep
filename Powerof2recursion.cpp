#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int powerof2(int n)
{
    if(n==0)
     return 1;

    // return 2*powerof2(n-1);
     
     int smallproblem=powerof2(n-1);
     int bigproblem=2*smallproblem;

     return bigproblem;

}

int main()
{
    int n;
    cin>>n;
    int ans=powerof2(n);
    cout<<ans<<endl; 
    return 0;
}