#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void  saynumber(int n,string arr[])
{
    
    if(n==0)
     return;
    int digit=n%10;
    n=n/10;
    saynumber(n,arr); //for reverse calling else number is printed in reverse order
    cout<<arr[digit]<<endl;

}

int main()
{
    string arr[10]={
        "zero","one","two","three","four","five","six","seven",
        "eight","nine"
    };
    int n;
    cin>>n;
    saynumber(n,arr);
    return 0;
}