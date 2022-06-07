// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends



vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
           
           deque<long long int>dq;
           vector<long long>ans; //stores ans
           //process first window of k size
           for(int i=0;i<K;i++)
           {
               if(A[i]<0)
               {
                   //negative element
                   dq.push_back(i); //stores index of that ele
               }
           }
           //store ans of first k sized window
           if(dq.size()>0)
           {
               ans.push_back(A[dq.front()]);
           }
           else
           {
               //no element is there in vector
               ans.push_back(0);
           }
           //process for remaining window
           for(int i=K;i<N;i++)
           {
               //removal of ele
               if(!dq.empty()&&i-dq.front()>=K)
               {
                  dq.pop_front();   
               }
               
               //addn of ele
               if(A[i]<0)
               {
                   //neg number
                   dq.push_back(i);
               }
               //ans store
               if(dq.size()>0)
           {
               ans.push_back(A[dq.front()]);
           }
           else
           {
               //no element is there in vector
               ans.push_back(0);
           }
               
           }
           return ans;
 }