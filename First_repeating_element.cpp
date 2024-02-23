#include<iostream>
using namespace std;

int main()
{
    int n;
    cout <<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j]){
                cout<<i+1;
                return 0;
            }
        }
    }
    return 0;
}