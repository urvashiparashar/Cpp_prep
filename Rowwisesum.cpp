#include<iostream>
using namespace std;
void sumprint(int arr[][4],int m,int n)
{
    
    cout<<"\n printing sum:";
    for(int i=0;i<3;i++)
   {   int sum1=0;
	   for(int j=0;j<4;j++)
	   {
		  sum1+=arr[i][j];
         
	   }
        cout<<sum1<<" ";
   }
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
   sumprint(arr,3,4);
   return 0;
}