void solve(stack<int>& myStack, int x)
{
	//base case
	if(myStack.empty())
	{
		myStack.push(x);
		return;
	}
	int num=myStack.top(); //refers to top element
	myStack.pop(); //first remove top element
	
	//recursive call
	solve(myStack,x);
	myStack.push(num);
	
	
	
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
	solve(myStack,x);
	return myStack;
}
