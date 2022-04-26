#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void  reachhome(int src,int dest)
{
    cout<<"src:"<<src<<" "<<"dest:"<<dest<<endl;
     if(src==dest)
      return;
    src++; //increase src
    reachhome(src,dest);
    

}

int main()
{
    int src;
    cin>>src;
    int dest;
    cin>>dest;
    reachhome(src,dest);
    return 0;
}