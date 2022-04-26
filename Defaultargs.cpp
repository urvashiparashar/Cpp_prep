#include<bits/stdc++.h>
using namespace std;
void printarr(int arr[],int n,int s=0) //s=default argument
{
    for(int i=s;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
     int arr[]={1,2,3,4,5};
     int n=5;
     printarr(arr,5);
     cout<<endl;
     printarr(arr,5,3);
     return 0;
}