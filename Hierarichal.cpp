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
class B:public A
{
    public:
    void heyy()
    {
        cout<<"Heyy";
    }
};
class C:public A
{
    public:
    void yoo()
    {
        cout<<"yoo";
    }
};
int main()
{
    A a;
    B b;
    C c;
    a.hii();
    b.heyy();
    b.hii();
    c.hii();
    c.yoo();// c cannot access func of b
    return 0;
}
