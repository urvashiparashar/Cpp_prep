#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string str;
    cin>>str;
    unordered_map<char,int>count;
    int i;
    for(i=0;i<str.length();i++)
    {
        count[str[i]]++; //increase count of characters by1

    }
    for (auto it:count)
    {
        /* code */
        if(it.second>1)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
    
    return 0;
}