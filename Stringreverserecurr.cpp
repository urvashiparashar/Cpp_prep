#include<bits/stdc++.h>
using namespace std;
void reverse_string(string& str,int s,int e)
{
    cout<<"call received for :"<<str<<endl;
    if(s>e)
     return;
    swap(str[s],str[e]);
    s++;
    e--;
    reverse_string(str,s,e);
}

int main()
{
    
   string str1="abcdef";
   reverse_string(str1,0,str1.length()-1);
   cout<<"reversed string is: "<<str1<<endl;
    return 0;
}