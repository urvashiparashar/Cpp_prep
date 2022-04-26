#include<bits/stdc++.h>
using namespace std;
int peakindex(int arr[],int s,int n,int e)
{
     s=0;
     e=n-1;
     if(s>e)
     {
         return -1;
     }
     int mid=s+((e-s)/2);
     if((arr[mid]>arr[mid-1])&&(arr[mid]>arr[mid+1]))
      return mid;
     
     if(arr[mid]<arr[mid+1])
     {
         return peakindex(arr,mid+1,n,e);
     }
     else
     {
         return peakindex(arr,s,n,mid);
     }
     return s;
}
int main()
{
    int arr[5]={3,4,5,2,1};
    int pk=peakindex(arr,0,5,4);
    cout<<pk<<endl;

    return 0;
}
