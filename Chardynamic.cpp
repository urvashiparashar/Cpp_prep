#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch='p';
    cout<<sizeof(ch)<<endl;
    char *q=&ch;
    cout<<sizeof(q)<<endl;
    return 0;
}