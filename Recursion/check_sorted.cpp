//check if an array is sorted or not(using recursion);
#include<iostream>
using namespace std;

bool check(int arr[], int n)
{
    if(arr[n]<arr[n-1])
    {
        return false;
    }
    if(n==1)
      return true;
    
    return check(arr,n-1);
}

int main()
{
    int n;
    cout<<"enter the n"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
      cin>>arr[i];
    
    if(check(arr, n-1))
     cout<<"sorted"<<endl;
    else 
     cout<<"Unsorted"<<endl;
    return 0;
}