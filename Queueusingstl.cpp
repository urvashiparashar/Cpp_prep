#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
   queue<int>q;
   q.push(11);
   cout<<q.front()<<endl;;
   q.push(22);
   cout<<q.front()<<endl;
   
   q.push(23);
   q.pop();
   cout<<q.size()<<endl;
   cout<<q.empty()<<endl; //false 0
   return 0;
}