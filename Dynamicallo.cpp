#include<bits/stdc++.h>
using namespace std;
int& func(int a)
{
    int num=a;
    int& ans=num;
    return ans;
}
int* ptr(int a)
{
    int* p=&a;
    return p;
}
void update2(int& n)
{
    cout<<n++;
}
void update(int n)
{
    cout<<n++;
}
int main()
{
    // int i=5;
    // int& j=i ; //dynamic allocated
    // cout<<i<<" "<<j<<endl;
    // cout<<i++<<" "<<j++;
    // cout<<endl;
    // cout<<i<<endl;
    int i=5;
    update(i); //copy :pbv
    cout<<endl;
    update2(i); //same memory but same name:pbr
    cout<<endl;
    cout<<i<<endl;
    cout<<func(i)<<endl;
    cout<<ptr(i)<<endl;
    return 0;
}