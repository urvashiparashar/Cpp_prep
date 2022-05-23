#include<stack>
#include<limits.h>
class SpecialStack {
    
    stack<int>s;
    int mini=INT_MAX; //to calculate min everytime
    // Define the data members.

    /*----------------- Public Functions of SpecialStack -----------------*/
    public:
        
    void push(int data) {
        // Implement the push() function.
        //check if empty
        if(s.empty())
        {
            //simply push data to stack
            s.push(data);
            mini=data; //update mini
        }
        else
        {
            //not empty
            if(data<mini)
            {
                //data smaller than mini
                s.push(2*data-mini);
                //upadte mini
                mini=data;
            }
            else
            {
                //data is bigger
                s.push(data);
            }
        }
    }

    int pop() {
        // Implement the pop() function.
        
        //check if stack is empty
        if(s.empty())
        {
            return -1;
        }
        int curr=s.top(); //curr is stack ka top
        s.pop();
        if(curr>mini)
        {
            //curr is bigger than mini
            //normal pop
            return curr;
        }
        else
        {
            //if curr is smaller than mini
            int prevmini=mini;
            int val=2*mini-curr;
            mini=val; //update mini
            return prevmini;
            
        }
    }

    int top() {
        // Implement the top() function.
        if(s.empty())
        {
            return -1;
        }
        int curr=s.top();
        if(curr<mini)
        {
            return mini;
        }
        else
        {
            //curr is bigger
            return curr;
        }
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        return s.empty();
    }

    int getMin() {
        // Implement the getMin() function.
        if(s.empty())
            return -1;
        return mini;
    }  
};