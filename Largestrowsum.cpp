#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxrowsum(int arr[][4],int m,int n)
{
    int max=INT_MIN;
    int rownum=-1;
    cout<<"\n printing sum:\n";
    for(int i=0;i<3;i++)
   {   int sum1=0;
	   for(int j=0;j<4;j++)
	   {
		  sum1+=arr[i][j];
         
	   }
       if(sum1>max)
       {
           max=sum1;
           rownum=i;
       }
       
   }
   cout<<"max sum is:"<<max;
    return rownum;
}
int main()
{
   int arr[3][4];
   for(int i=0;i<3;i++)
   {
	   for(int j=0;j<4;j++)
	   {
		   cin>>arr[i][j]; //input as row array
	   }
   }
   cout<<"printing array:\n";
   for(int i=0;i<3;i++)
   {
	   for(int j=0;j<4;j++)
	   {
		   cout<<arr[i][j]<<" "; //input as row array
	   }
       cout<<"\n";
   }
   cout<<"\nmax sum at row"<<maxrowsum(arr,3,4);
   return 0;
}