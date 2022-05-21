// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    
    //function to find if every one knows everyone or not
    bool knows(vector<vector<int> >& M,int a,int b,int n)
    {
        if(M[a][b]==1)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
    
    
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int>s;
        //push all elements into stack
        for(int i=0;i<n;i++)
        {
            s.push(i);
        }
        //step2: perform till stack size is 1
        while(s.size()>1)
        {
            int a=s.top();
            s.pop(); //for pushing and popping to see if it is 0 and 1 i.e knows or not knows
            int b=s.top();
            s.pop();
            if(knows(M,a,b,n))
            {
                //if a knows b then push b and discard a
                s.push(b);
            }
            else
            {
                s.push(a); //else push a
            }
        }
        int cand=s.top();
        //step 3: to find if ele is potential or not
        //checking for rows
        bool rowcheck=false;
        int zerocount=0; ///celebrity row must be zero
        for(int i=0;i<n;i++)
        {
            if(M[cand][i]==0)
            {
                zerocount++;
            }
        }
        if(zerocount==n)
        {
            rowcheck=true; //all row value are 0
        }
        //checking for rows
        bool colcheck=false;
        int onecount=0; ///celebrity row must be zero
        for(int i=0;i<n;i++)
        {
            if(M[i][cand]==1)
            {
                onecount++;
            }
        }
        if(onecount==n-1) //except the diagonal element that would be 0
        {
            colcheck=true; //all row value are 0
        }
        if(rowcheck==true && colcheck==true)
        {
            return cand;
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
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends