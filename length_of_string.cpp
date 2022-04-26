#include<iostream>
using namespace std;
char lowertoupper(char ch) //for treating the uppercase as lowercase
{
    if(ch>='a' && ch<='z') //for lc: 97 to 122
    //fir uc: 65 to 90
    {
        //lowercase 
        return ch; 

    }
    else
    {
        char temp=ch-'A'+'a';
        return temp;
        //uppercase to lowercase
    }
}
bool ispalindrome(char string[],int n)
{
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        /* code */
        // if(string[s]!=string[e]) //first and last not equal
        if(lowertoupper(string[s])!=lowertoupper(string[e]))  //string not case sensitive
        {
            return 0;
            
        }
        else
        {
            s++;
            e--;
        }
    }
    //matlab pura equal palindrome so return 1
    return 1;
    

}
void reverse(char string[],int n)
{
    int s=0;
    int e=n-1;
    while (s<e)
    {
        /* code */
        swap(string[s++],string[e--]);
    }

    
}
int length(char string[])
{
    int len=0;
    for(int i=0;string[i]!='\0';i++)
    {
        len++;
    }
    return len;
}
int main()
{
    char name[20];
    cin>>name;
    int k=length(name);
    // reverse(name,k);
    // cout<<name;
    cout<<ispalindrome(name,k);
    return 0;
}