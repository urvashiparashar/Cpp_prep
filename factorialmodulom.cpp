#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{   
    int m=pow(10,9);
    int k=m+7;
    int fact=1;
    while (n>0)
    {
        /* code */
        fact=(fact*(n)%m)%m;
        n--;
    }
    return fact;

}
int main()
{
   cout<<factorial(7);
   return 0;
}