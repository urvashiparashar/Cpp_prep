// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    
		    //take a map to count frequency of characters
		    map<char,int>m;
		    string ans=""; //o/p is a string given
		    queue<int>q;
		    for(int i=0;i<A.length();i++)
		    {
		        char ch=A[i];//taking a single char
		        q.push(ch);
		        m[ch]++; //increasing the frequency of char
		        while(!q.empty())
		        {
		            if(m[q.front()]>1)
		            {
		                //char are seen from front of queue
		                q.pop(); //remove those char whose freq is gerater than 1
		            }
		            else
		            {
		                ans.push_back(q.front()); //push them into ans
		                break ; 
		            }
		        }
		        //out of while loop
		        if(q.empty())
		        {
		            ans.push_back('#');
		        }
		    }
		    return ans;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends