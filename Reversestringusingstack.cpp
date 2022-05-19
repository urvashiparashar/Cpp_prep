#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
    string str="babbar";
    stack<char>s;
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        s.push(ch);
    }
    string ans="";
    while (!s.empty())
    {
        /* code */
        char ch=s.top(); //to access top element every time
        ans.push_back(ch);//push in ans
        s.pop();
    }
    cout<<"\n answer is: "<<ans;
    return 0;
    
}