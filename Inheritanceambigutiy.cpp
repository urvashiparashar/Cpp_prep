#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    void hii()
    {
        cout<<"Hii";
    }
};
class B
{
    public:
    void hii()
    {
        cout<<"Heyy";
    }
};
class C:public A,public B
{
    
};
int main()
{
    
    C c;
    c.A::hii();
    c.B::hii();
    return 0;
}
