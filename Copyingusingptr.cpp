#include<iostream>
using namespace std;
int main()
{
    int a=5; //mb created
    int p=a; //mb created
    p++;
    cout<<a<<" "<<p<<endl;

    int *t=&a;//t stores address of a
    (*t)++; //value pointed by t incremented by 1
    cout<<*t<<" "<<a;
    


    return 0;
}