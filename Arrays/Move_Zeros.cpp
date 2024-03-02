/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.
Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
*/

#include<iostream>
using namespace std;

/*class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0; 
                                                    **best way to solve this question**
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++; 
            }
        }
    }
};*/

int main()
{
    int count=0;
    int n;
    cout<<"enter the size"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int i=0;
    while(i<n-count)
    {
        if(arr[i]==0)
        {
            for(int j=i; j<n-1; j++)
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            count++;
        }
        else
         i=i+1;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}