//Method to find the prime number till the given number.
//by marking the non prime number with 1;
#include<iostream>
using namespace std;

void primeSieve(int n)
{
    int prime[100]={0};
    for(int i=2; i<=n; i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i; j<n; j+=i)
            {
                prime[j]= i;
            }
        }
    }

    for(int i=2; i<n; i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"enter the number till u want the prime numbers"<<endl;
    cin>>n;
    primeSieve(n);
    cout<<"this is the required result"<<endl;
    return 0;
}