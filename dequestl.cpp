#include<iostream>
#include<deque>
using namespace std;
int main()
{
  deque<int>d;
  //inserting elements
  d.push_back(1);
  d.push_back(2);
  d.push_back(3);
  d.push_front(5);
  
  for(int i:d)
  {
      cout<<i<<" ";
  }
  cout<<endl;
  cout<<d.size()<<" "<<endl;
  d.pop_back();
  d.pop_front();
  for(int i:d)
  {
      cout<<i<<" ";
  }
  cout<<endl;
  cout<<d.size()<<" "<<endl;//max size remains same always
  cout<<endl;
  cout<<"element at front: "<<d.front()<<endl;
  cout<<"element at end: "<<d.back()<<endl;
  d.erase(d.begin(),d.begin()+1); //erased from beginning:1 to end-1(ignore)
   cout<<d.size()<<" "<<endl;//max size remains same always
   cout<<d.at(0)<<endl;


}