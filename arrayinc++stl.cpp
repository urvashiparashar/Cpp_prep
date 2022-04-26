#include<iostream>
#include<array>
using namespace std;
int main()
{
    int a[3]={1,2,3};
    array<int ,4>a1={1,2,3,4};
    for(int i=0;i<a1.size();i++)
    {
        cout<<a1[i]<<" ";
    }
    cout<<a1.at(3)<<" ";
    cout<<a1.size()<<" ";
    cout<<a1.front()<<" "; //first element
    cout<<a1.back()<<" "; //last element

}