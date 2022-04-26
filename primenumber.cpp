#include<iostream>
using namespace std;
bool isprime(int n)
{
    if(n<=1)
       return false;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
          return false; //kahi pe bhi true toh not prime
    }
    return true;
}
int main()
{
    
    int num;
    cin>>num;
    if(isprime(num))
    {
        cout<<"is prime";
    }
    else
    {
        cout<<"not prime";
    }
    return 0;
}