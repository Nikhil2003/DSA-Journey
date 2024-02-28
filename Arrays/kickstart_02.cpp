//record breaker, kickstart question
#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    cout <<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<n-1; i++)
    {
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
        {
            count++;
            cout<<arr[i]<<endl;
        }
    }
    cout<<"number of record breaking days are: "<<count;
    return 0;
}