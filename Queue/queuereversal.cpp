// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
queue<int> rev(queue<int> q);
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    queue<int> a=rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}// } Driver Code Ends


//function Template for C++

//Function to reverse the queue.
queue<int> rev(queue<int> q)
{
    // add code here.
    //code here
    stack<int>s;
    while(!q.empty()) //if queue is not empty
    {
        //if q is not empty
        //pop ele from front and put them into stack
        int ele=q.front();
        q.pop(); //pop from queue
        s.push(ele); //push to stack
        
    }
    while(!s.empty())
    {
        int ele=s.top(); //from top ele
        s.pop(); //pop ele from stack
        q.push(ele); //push ele in stack
    }
    return q;
}