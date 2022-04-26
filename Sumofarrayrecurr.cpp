#include<bits/stdc++.h>
using namespace std;
int sum_array(int arr[],int n)
{
    
    if(n==0)
     return 0;
    if(n==1)
     return arr[0];
    
    
    int getsum=sum_array(arr+1,n-1);
    int totalsum=arr[0]+getsum;
    return totalsum;
    

}
int main()
{
    int arr[5]={1,2,3,4,5};
    // for(int i=0;i<5;i++)
    // {
    //     cin>>arr[i];
    // }
    int ans=sum_array(arr,5);
    cout<<ans;
    return 0;
}