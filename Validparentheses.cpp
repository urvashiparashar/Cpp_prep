bool isValidParenthesis(string expression)
{
    // Write your code here.
	
	//take chars in stack
	stack<char>s;
	for(int i=0;i<expression.length();i++)
	{
		char ch=expression[i];
		//if open bracket:push
	    //close bracket:check and pop
	    if(ch=='(' || ch=='{' || ch=='[')
			//push the opening brackets
			s.push(ch);
		else
		{
			//check if stack is empty or not
			if(!s.empty()) //stack not empty
			{//incoming char is closing bracket
			
			//check if there is corresponding close bracket or not
				char top=s.top();
				if((ch==')' && top=='(') || (ch=='}' && top=='{') || (ch==']' && top=='['))
				{
					s.pop();//pop out the top ele
				}
				else
				{
					return false;
				}
			}
			else
			{
				//stack is empty
				return false;
			}
			
			
		}
		
	}
	if(s.empty())
	{
		return true;
	}
	else
	{
		return false;
	}
	
	
}