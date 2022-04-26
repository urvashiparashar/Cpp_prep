#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s;
    //ordered set so elements are printed in order always and all unique element
    s.insert(1);
    s.insert(0);
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    //accessing elements
    for(auto i:s)
    {
        cout<<i<<endl;
    }
    cout<<endl;

    set<int>::iterator it=s.begin(); //starting form beginning
    it++; //and printing the second element
    s.erase(it); //erasing second element
    for(auto i:s)
    {
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<"is 5 present? "<<s.count(5)<<endl; //false

    set<int>::iterator i1=s.find(3);
    for(auto i=i1;i!=s.end();i++)
    {
       cout<<*i<<endl; //only 2 elements starting with 3
    }
    cout<<endl;

    //Tc of erase,find,insert,count=O(logn)
    //Tc of size,begin=O(1)
    return 0;
}

