// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


 // } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int deficit=0;
       int bal=0;
       int s=0;
       for(int i=0;i<n;i++)
       {
           bal+=p[i].petrol-p[i].distance;
           if(bal<0)
           {
               //bal is negative : petrol is deficit so cannot travel to next petrol pump
               deficit+=bal;
               s=i+1;
               bal=0;
           }
       }
       if(deficit+bal>=0) //checjs if the sum is greater than 0 or not
       {
           return s; //where front and rear are at same point
       }
       else
       {
           return -1;
       }
       
    }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}
  // } Driver Code Ends