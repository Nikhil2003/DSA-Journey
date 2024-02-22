// printing the sum of the subarrays of an given array;
#include<iostream>
using namespace std;

int main()
{
    int sum=0,s=0,n;
    cout <<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
        sum+=arr[i];

    }
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(i!=j)
            {
                s=arr[i]+arr[j];
                cout<<s<<endl;
            }
        s=0;
        }
    }
    cout<<sum;
    return 0;
}