#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>m;
    m[1]="a";
    m[2]="b";
    m[13]="c";
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    cout<<m.erase(13)<<endl; //keeping only key
    cout<<"13 present: "<<m.count(13)<<endl;
    
    auto i1=m.find(1);
    for(auto j=i1;j!=m.end();j++)
    {
        cout<<(*j).first<<endl; //key only as first
    }
    cout<<endl;


    return 0;
}