#include<iostream>
using namespace std;
void print(int *p) //passing pointer
{
    cout<<*p<<endl; //value
    cout<<p<<endl; //address
}
void update(int *p)
{
     cout<<p<<endl;
    p=p+1;
    cout<<p<<endl;
}
int main()
{
    int v=5;
    int *p=&v;
    print(p); //passing pointer
    update(p);
    cout<<p<<endl; 
    return 0;
}