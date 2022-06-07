#include<bits/stdc++.h>
using namespace std;
void interleavequeue(queue<int> &q)
{
    if(q.size()%2!=0)
    {
        //only queues with even size can be interleaved
        cout<<"input an even sized queue"<<endl;
    }
    stack<int>s;
    //taking the firsthalf and transferring the elements to stack
    int halfsize=q.size()/2; 
    for(int i=0;i<halfsize;i++)
    {
        s.push(q.front()); //this way the last ele from halfsize queue will come on top of stack and so on
        q.pop(); //remove the input stack ele from queue  : queue size becomes half
    }
    //adding the stack ele from stack to the half queue got earlier
    while (!s.empty())
    {
        /* code */
        //s is not empty
        q.push(s.top()); //pushing ele from top of stack
        s.pop(); //
    }
    //the added ele at back are in reverse order
    //push the first ele of queue attach at back of the queue
    for(int i=0;i<halfsize;i++)
    {
        q.push(q.front()); //from front
        q.pop(); //pop those transferred ele from front
    }

    //again take first half of queue into stack to get the order of elements
    for(int i=0;i<halfsize;i++)
    {
        s.push(q.front()); //from stack
        q.pop(); //popping the pushed ele from queue
    }
    //interleaving ele from stack and queue both
    while (!s.empty())
    {
        /* code */
        q.push(s.top()); //first ele in order
        s.pop();
        q.push(q.front()); //from front of queue
        q.pop();
    }
    
    
}
int main()
{
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);
    interleavequeue(q);
    int len=q.size();
    for(int i=0;i<len;i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}