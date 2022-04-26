#include<iostream>
using namespace std;
int main()
{
    int p=5;
    int *ptr=&p;
    cout<<"address of ptr: "<<ptr<<endl;
    cout<<"value of ptr: "<<*ptr<<endl;

    //also ptr can be assigned as
    int *q=0;
    q=&p;
    cout<<"address of ptr: "<<q<<endl;
    cout<<"value of ptr: "<<*q<<endl;

    return 0;
}