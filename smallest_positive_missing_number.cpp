//Smallest positive missing number.. Asked in AMAZON, SNAPDEAL, SAMSUNG, ACCOLITE.
#include<iostream>
using namespace std;

int main()
{
    int n,j,i;
    cout <<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<=100; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i == arr[j])
             break;
        }
        if(j==n)
        {
            cout<<"missing number is: "<< i;
            return 0;
        }
    }
    return 0;
}