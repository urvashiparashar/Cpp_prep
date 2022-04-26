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
int firstposn(int arr[],int s,int e,int key)
{
   
    int ans=-1;
    if(s>e)
     return -1;
    int mid=s+(e-s)/2;
    if(arr[mid]==key)
    {
        if(arr[mid]!=arr[mid-1] || mid==0) //only one element
          return mid;
        else 
        {
            return firstposn(arr,s,mid-1,key);
        }
        
         
    }
      
       //to look if previous same elememt
    if(arr[mid]<key)
      return firstposn(arr,mid+1,e,key);
    if(arr[mid]>key)
      return firstposn(arr,s,mid-1,key);

}
int lastposn(int arr[],int s,int e,int key)
{
    
    int ans=-1;
    if(s>e)
     return -1;
    int mid=s+(e-s)/2;
    if(arr[mid]==key)
    {
        if(arr[mid]!=arr[mid+1] || mid==e) //only one element
          return mid;
        else 
        {
            return lastposn(arr,mid+1,e,key);
        }
        
         
    }
      
       //to look if previous same elememt
    if(arr[mid]<key)
      return lastposn(arr,mid+1,e,key);
    if(arr[mid]>key)
      return lastposn(arr,s,mid-1,key);

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
    int ans=firstposn(arr,0,n-1,key);
    int ans1=lastposn(arr,0,n-1,key);
    cout<<ans<<" "<<ans1<<endl;
    
    return 0;
}