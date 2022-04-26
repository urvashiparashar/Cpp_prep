#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>q; //max heap: max elements first
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    int n=q.size();
    for(int i=0;i<n;i++)
    {
        cout<<q.top()<<endl;
        q.pop(); //as size changes after evry pop so we require n
    }
    cout<<endl;

    priority_queue<int,vector<int>,greater<int>>minheap; //minheap
    minheap.push(1);
    minheap.push(2);
    minheap.push(3);
    minheap.push(4);
    int m=minheap.size();
    for(int i=0;i<m;i++)
    {
        cout<<minheap.top()<<endl;
        minheap.pop(); //as size changes after evry pop so we require n
    }
    cout<<endl;
    
    cout<<q.empty()<<" "<<minheap.empty()<<endl; //1 as popped elements
    return 0;



    
}