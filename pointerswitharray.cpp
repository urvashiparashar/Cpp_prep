#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
//     int arr[10]={1,2,3,4,5,6,7,8,9,10}; //array created of size 10
//     // cout<<arr<<endl; //address of arr index 0 locn
//     // cout<<"locn of 0 index: "<<&arr[0]<<endl;
//     // cout<<*arr+1<<endl;
//     // cout<<*(arr)+1<<endl;
//     // cout<<*(arr+4)<<endl;

//    cout<<sizeof(arr)<<endl; //40
//     cout<<sizeof(*arr)<<endl; //4
//     cout<<sizeof(&arr)<<endl; //8

//     int *ptr=&arr[0];
//     cout<<sizeof(ptr)<<endl; //4
//     cout<<sizeof(*ptr)<<endl;//4
//     cout<<sizeof(&ptr)<<endl;//4

    int a[20]={1,2,3};
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<&a[0]<<endl;

    int *p=&a[0]; //address of pointer indicating address of 0th locn index
    cout<<p<<endl;
    p=p+1;
    cout<<p<<endl;
    cout<<&p<<endl;

   int t=10;
   int *q=&t;
   cout<<q<<endl;
   q=q+1;
   cout<<q<<endl;

   char ch[6]="abcde";
   char *c=&ch[0];
   cout<<c<<endl; //entrie string printed

    return 0;
}