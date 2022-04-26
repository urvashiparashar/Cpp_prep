#include<bits/stdc++.h>
using namespace std;
bool issorted(int arr[],int n)
{
    //base case
    if(n==0 || n==1)
     return true;
    if(arr[0]>arr[1])
     return false; //starting me pata chal jaega
    else
    {
        bool remaining=issorted(arr+1,n-1);
        return remaining;
    }
}
int main()
{
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool ans=issorted(arr,n);
    if(ans)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}