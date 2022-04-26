#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[],int s,int e)
{
    for(int i=s;i<=e;i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool binary_search(int arr[],int s,int e,int key)
{
    cout<<endl;
    printarray(arr,s,e);
    if(s>e)
     return false;
    int mid=s+(e-s)/2;
    if(arr[mid]==key)
      return true;
    if(arr[mid]<key)
      return binary_search(arr,mid+1,e,key);
    else
      return binary_search(arr,s,mid-1,key);

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
    bool ans=binary_search(arr,0,n-1,key);
    if(ans)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    // int arr[11] = {2,4,6,10,14,18,22,38,49,55,222};
    // int size = 11;
    // int key = 222;

    // cout << "Present or not " << binary_search(arr, 0, size-1, key) << endl;
    return 0;
}