#include<iostream>
using namespace std;
void printsum(int arr[][4])
{
    
    for(int i=0;i<4;i++) //col
    {   int sum=0;
        for(int j=0;j<3;j++) //row
        {
            sum+=arr[j][i];
        }
        cout<<sum<<" ";
    }
}
int main()
{
    int arr[3][4];
    for(int i=0;i<4;i++) //col
    {
        for(int j=0;j<3;j++) //row
        {
            cin>>arr[j][i];
        }
    }
    cout<<"printing array:\n";
    for(int i=0;i<3;i++) //col
    {
        for(int j=0;j<4;j++) //row
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    printsum(arr);
    return 0;
}