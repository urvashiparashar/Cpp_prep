#include<list>
#include<iostream>
using namespace std;
int main()
{
    list<int>l;
    list<int>n(5,100); //initialising 5 elements 100 initialised
    list<int>l1(n);
    l.push_back(4);
    l.push_front(5);
    l.push_back(9);
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i:n)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i:l1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"before erase"<<l.size()<<endl;
    l.erase(l.begin());
    cout<<"after erase size is:"<<l.size()<<endl;
    return 0;
} 
