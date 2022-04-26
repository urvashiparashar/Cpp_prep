#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
     v.push_back(3);
      v.push_back(4);
       v.push_back(7);

       cout<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl; //>=value
       cout<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;  //>value

       int a=1,b=4;
       cout<<max(a,b)<<endl;
       cout<<min(a,b)<<endl;

       string m="abcd";
       reverse(m.begin(),m.end());
       cout<<m<<endl;

       //rotating the vector by replacing next value i.e +1
       rotate(v.begin(),v.begin()+1,v.end());
       for(int i:v)
       {
           cout<<i<<endl;
       }


   return 0;
}