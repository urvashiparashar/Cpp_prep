#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int s,int e)
{
    int pivot=arr[s]; //taking starting element as pivot
    int cnt=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            cnt++;
        }
    }
    int pivotindex=s+cnt; //pivotindex
    swap(arr[pivotindex],arr[s]);
    //pointers for start and end
    int i=s,j=e;
    while(i<pivotindex && j>pivotindex)
    {
        while (arr[i]<pivot)
        {
            /* code */
            i++;
        }
        while (arr[j]>pivot)
        {
            /* code */
            j--;
        }
        //else other condition
        if(i<pivotindex && j>pivotindex)
        {
            swap(arr[i++],arr[j--]);
        }
        
        
    }
    return pivotindex;
}
void quicksort(int arr[],int s,int e)
{
    //basecase
    if(s>=e)
     return;
    //partition:gives index of pivot element
    int p=partition(arr,s,e);
    //recurrsion
    quicksort(arr,s,p-1); //left side of pivot
    quicksort(arr,p+1,e); //right side of pivot


}
int main()
{
   int arr[6]={77,1,8,0,-5,66};
   quicksort(arr,0,5);
   for(int i=0;i<6;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
}