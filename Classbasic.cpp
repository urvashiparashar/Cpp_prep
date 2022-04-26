#include<bits/stdc++.h>
#include "Aclass.cpp"
using namespace std;
class Hero
{
    //properties
    // private:
    public:
    char level;
    private:
    int health;

    int gethealth()
    {
        return health;
    }
    void sethealth(int h)
    {
        health=h;
    }
    void print()
    {
        cout<<level<<endl;
    }
};
int main()
{
    Hero h1;
    h1.health=70;
    h1.level='A';
    cout<<h1.sethealth(70);
    cout<<h1.gethealth()<<endl;
    // A a1;
    // cout<<sizeof(a1)<<endl;
    // cout<<sizeof(h1)<<endl; //incase of empty class for identification of object we get as 1 byte.
    cout<<h1.health<<endl; //garbage value until intialised
    cout<<h1.level<<endl;
    return 0;
}