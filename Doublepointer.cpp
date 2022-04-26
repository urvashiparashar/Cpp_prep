#include<iostream>
using namespace std;
void printp(int** p)
{
    // p=p+1; //nochange
    // *p=*p+1; //yes
    **p=**p+1;

}
int main()
{
    int i=5;
    int* p=&i;
    int** p1=&p;

    // cout<<i<<endl;
    // cout<<&i<<endl;
    // cout<<*p<<endl;
    // cout<<p<<endl;
    // cout<<p1<<endl;
    // cout<<**p1<<endl;

    // cout<<"I can be printed as:"<<endl;
    // cout<<i<<" "<<*p<<" "<<**p1<<endl;

    // cout<<"contents of p"<<endl;
    // cout<<p<<" "<<&i<<" "<<*p1<<endl;

    cout<<i<<" "<<p<<" "<<p1<<endl;
    printp(p1);
    cout<<i<<" "<<p<<" "<<p1<<endl;


     return 0;
}