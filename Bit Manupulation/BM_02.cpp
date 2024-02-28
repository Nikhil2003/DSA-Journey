//Q:- WAP to find a unique number in an array where all number except one are present twice.
//{2,4,6,3,4,6,2}

#include<iostream>
using namespace std;

int unique(int arr[] , int n)
{
    int xorsum=0;
    for(int i=0; i<n;i++)
    {
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}

int main()
{
    int arr[5];
    cout<<"enter the element in the array"<<endl;
    for(int i=0;i<5;i++)
      cin>>arr[i];
    cout<<"the unique number is "<<unique(arr, 5);
    return 0;
}