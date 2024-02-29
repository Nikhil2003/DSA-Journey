//find the prime factor of the given number;
#include<iostream>
using namespace std;

void primeFactor(int n)
{
    int spf[100]={0};
    for(int i=2; i<=n; i++)
    {
        spf[i]=i;
    }

    for(int i=2; i<=n; i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                if(spf[j]==j)
                {
                    spf[j]=i;
                }
            }
        }
    }
    while(n!=1)
    {
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
}

int main()
{
    int n;
    cout<<"enter the number u want the factor of"<<endl;
    cin>>n;
    primeFactor(n);
    cout<<"this is the required result"<<endl;
    return 0;
}