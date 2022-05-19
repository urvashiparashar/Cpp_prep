void solve(stack<int>&inputStack,int count,int size)
{
	//delete ele from middle
	//base case
	if(count==size/2) //middle ele
	{
		inputStack.pop();
		return ; //return to add the remaining ele of stack
	}
	int num=inputStack.top(); //store the top ele
	inputStack.pop();
	
	//recursive call
	solve(inputStack,count+1,size); //count+1 for ele stored in num
	
	//add top removed ele back
	inputStack.push(num);
		
}
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
	int count=0;
	solve(inputStack,count,N);
   
}