#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s; //LIFO
    s.push("hii");
    s.push("hello");
    s.push("heyy");
    cout<<"toppest element of stack is:"<<s.top()<<endl; //last element
    s.pop(); //last entered element gets popped
    cout<<s.size()<<endl;
    return 0;

}