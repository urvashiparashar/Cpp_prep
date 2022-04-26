#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string>q; //FIFO
    q.push("a");
    q.push("b");
    q.push("c");
    cout<<q.front()<<endl; //first entered element
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    return 0;
}