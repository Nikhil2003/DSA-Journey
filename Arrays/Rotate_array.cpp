/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

*/

/* This method is simpler way.
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>ans(n);
        for (int i = 0; i <n;i++){
            int newi=(i+k)%n;
            ans[newi]=nums[i];
        }
        nums=ans;
    }

};
*/
// this below cross the time limit. and not suitable according to the leetcode given time compplexity constraints
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int num[n];
    for(int i=0; i<n; i++)
    {
        cin>>num[i];
    }
    cout<<"enter the number u want to shift"<<endl;
    int k;
    cin>>k;

    for(int i=1; i<=k; i++)
    {
        int temp=num[n-1];
        for(int j=n-1; j>=1; j--)
        {
            num[j]=num[j-1];
        }
        num[0] = temp;
    }

    for(int i=0; i<n; i++)
      cout<<num[i]<<" "<<endl;
    
    cout<<3%7;

    
    return 0;
}