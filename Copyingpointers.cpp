#include<iostream>
using namespace std;
int main()
{
    int i=8;
    int *ptr=&i;
    int *q=ptr;
    cout<<q<<" "<<ptr<<endl;
    cout<<*q<<" "<<*ptr<<endl;
    // cout<<*q++<<endl; //gives same output as *q;
    *q=*q+1;
    cout<<*q<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
    return 0;
}