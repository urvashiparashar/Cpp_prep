#include<bits/stdc++.h>
using namespace std;
int solve(int *arr,int n,int k)
{
    deque<int>maxi(k);
    deque<int>mini(k);

    //addn of first k size window
    for(int i=0;i<k;i++)
    {
        //decreasing order
        while(!maxi.empty()&& arr[maxi.back()]<=arr[i])
        {
            maxi.pop_back(); //moe bigger ele found
        }
        while(!mini.empty()&&arr[mini.back()]>=arr[i])
        {
            /* code */
            mini.pop_back();//more smaller ele found
        }
        mini.push_back(i);
        maxi.push_back(i);

        
    }
    //loop to check every k window
    int ans=0;
    for(int i=k;i<n;i++)
    {
        ans+=arr[maxi.front()]+arr[mini.front()];

        //next window
        //removal in dequeue
        while (!maxi.empty()&& i-maxi.front()>=k)
        {
            /* code */
            maxi.pop_front();
        }
        while (!mini.empty()&& i-mini.front()>=k)
        {
            /* code */
            mini.pop_front();
        }

        //addition from rear in dequeue
        while (!maxi.empty()&& arr[maxi.back()]<=arr[i])
        {
            /* code */
            maxi.pop_back();
        }
        while (!mini.empty()&& arr[mini.back()]>=arr[i])
        {
            /* code */
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
        
    }

    //process last window
    ans+=arr[maxi.front()]+arr[mini.front()];
    return ans;
}
int main()
{
    int arr[7]={2,5,-1,7,-3,-1,-2};
    int k=4;
    cout<<solve(arr,7,k);
    return 0;
}