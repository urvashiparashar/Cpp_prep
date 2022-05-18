class TwoStack {
	
	int *arr;
	int top1,top2,size;
	//stack1 will be from front and stack2 will be from back

public:

    // Initialize TwoStack.
    TwoStack(int s) {
        // Write your code here.
		this->size=s;
		top1=-1; //for front
		top2=s; //for back
		arr=new int[s];
		
    }
    
    // Push in stack 1.
    void push1(int num) {
        // Write your code here.
		if(top2-top1>1)
		{
			top1++; //top1 last pahuch jayega toh ele insert nhi hoga
			arr[top1]=num;
		}
		
		
    }

    // Push in stack 2.
    void push2(int num) {
        // Write your code here.
		if(top2-top1>1)
		{
			top2--; //top1 last pahuch jayega toh ele insert nhi hoga
			arr[top2]=num;
		}
		
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        // Write your code here.
		if(top1>=0)
		{
			//stack is having ele
			int ans=arr[top1];
			top1--;
			return ans;
		}
		else
		{
			return -1;
		}
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        // Write your code here.
		if(top2<size)
		{
			//stack is having ele
			int ans=arr[top2];
			top2++;
			return ans;
		}
		else
		{
			return -1;
		}
    }

};
