#include<iostream>
using namespace std;
int getsum(int *arr,int n)
{
  int sum=0;
  cout<<sizeof(arr)<<endl;
  for(int i=0;i<n;i++)
  {
    sum+=arr[i];
  }
  return sum;
}
int main()
{
    int arr[5]={0,1,2,3,4};
    cout<<getsum(arr,5)<<endl;
    cout<<getsum(arr+3,3); //last three sum
    return 0;
}