#include<bits/stdc++.h>
using namespace std;
bool linear_search(int arr[],int n,int key)
{
    if(n==0)
     return false;
    if(arr[0]==key)
     return true;
    else
    {
        bool search2=linear_search(arr+1,n-1,key);
        return search2;
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
    int key;
    cin>>key;
    bool ans=linear_search(arr,n,key);
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