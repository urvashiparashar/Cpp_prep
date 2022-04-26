#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    cout<<v.capacity()<<endl; //0
    v.push_back(1);
    cout<<v.capacity()<<endl; //1
    v.push_back(2);
    cout<<v.capacity()<<endl; //2
    v.push_back(3);
    cout<<v.capacity()<<endl; //4
    //capacity doubles after every push_back;
    v.push_back(4); 
    cout<<v.capacity()<<endl;  //space created for fourth element so it is 4
    v.push_back(5);
    cout<<v.capacity()<<endl; //8

    //accessing vector elements
    cout<<"before pop back"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back(); //deleting from last
    cout<<"after pop back"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<v.capacity()<<endl; //as already 8 is created

    cout<<"size is:"<<v.size()<<endl; //no.of elements
    cout<<"at index 2:"<<v.at(2)<<endl; //index starts as array i.e. 0 so at 2: 3

    // cout<<v.clear();
    // cout<<v.capacity()<<endl;

    vector<int>v1(5,1); //initialising all 5 elements of v1 as 1
    cout<<"printing v"<<endl;
    for(int i:v1)
    {
        cout<<i<<" ";

    }
    cout<<endl;
    vector<int>last(v1); //copies elements of v1 in vector last
    cout<<"printing last"<<endl;
    for(int i:last)
    {
        cout<<i<<" ";

    }

}