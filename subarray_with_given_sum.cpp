//Subarray with given sum question asked in GOOGLE,FACEBOOK,VISA,AMAZON
#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout <<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the number you want to check the sum"<<endl;
    int s;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            sum +=arr[j];
            if(sum>s)
            {
              sum=0;
              break;
            }
            if(sum==s)
            {
                cout<<i+1<<" "<<j+1;
                return 0;
            }
        }
    }
    return 0;
}