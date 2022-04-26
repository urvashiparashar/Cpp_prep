#include<iostream>
using namespace std;
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort(int arr[],int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        while (arr[i]==0 && i<j)
        {
            /* code */
            i++;
        }
        while (arr[j]==1 && i<j)
        {
            /* code */
            j--;
        }

        //if l>r
        if(i>j){
        swap(arr[i],arr[j]);
        i++;
        j--;
        }
        
        
    }
}
int main()
{
    int arr[]={0,1,1,1,0,1,0};
    int m=sizeof(arr)/sizeof(int);
    sort(arr,m);
    printarray(arr,m);
    return 0;
}