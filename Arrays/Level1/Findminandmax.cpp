#include<bits/stdc++.h>
using namespace std;
void findmaxmin(vector<int>const &nums,int &min,int &max)
{
    max=nums[0];
    min=nums[0];
    //starting from 1
    for(int i=1;i<nums.size();i++)
    {
        if(max<nums[i])
        {
            max=nums[i];
        }
        else if(min>nums[i])
        {
            min=nums[i];
        }
    }
    cout<<"Maximum ele is: "<<max<<endl;
    cout<<"Minimum ele is: "<<min;
}
int main()
{
    vector<int>nums={5,2,6,7,3,4,8};
    int max,min;
    findmaxmin(nums,max,min);
    return 0;
}