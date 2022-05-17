#include<bits/stdc++.h>
#include<stack>
using namespace std;
//implementation of stack using array
class Stack
{   public:
   //properties of class
   int size;
   int *arr;
   int top;

   //behaviours
   Stack(int size)
   {
       //intialize size of array
       this->size=size;
       //ye func wala size=declared size var
       arr=new int[size]; //initiliaze array with size
       top=-1;
   }
   
   void push(int data)
   {
       if(size-top>1)
       {
           //if top reaches last index of array then ele cannot be inserted
           top++;
           arr[top]=data;
       }
       else
       {
           cout<<"Stack overflow"<<endl;
       }
   }

   void pop()
   {
       if(top>0)
       {
           //only if ele are present in array
           top--;
       }
       else
       {
           cout<<"Stack underflow";
       }
   }
   int peek()
   {
       if(top>=0)
       {
           //ele presents
           return arr[top];
       }
       else
       {
           cout<<"stack is empty"<<endl;
           return -1;
       }
   }
   bool isempty()
   {
       if(top==-1)
       {
           //no ele as top is same as intialized
           return true;
       }
       else
       {
           return false;
       }
   }

};

int main()
{
    //implementation of stack using stl
    // stack<int>s;
    // s.push(23); //inserting elements
    // s.push(34);
    // s.push(5);
    // cout<<s.top()<<endl; //for top ele
    // s.pop(); //removing ele
    // if(s.empty())
    // {
    //     //to check if stack is empty of not
    //     cout<<"empty";
    // }
    // else
    // {
    //     cout<<"not empty";
    // }
  
    Stack st(5); //size given of 5 ele
    st.push(2);
    st.push(4);
    st.push(33);
    st.push(45);
    
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    if(st.isempty())
    {
        cout<<"yes empty"<<endl;
    }
    else
    {
        cout<<"not empty";
    }
    return 0;

}