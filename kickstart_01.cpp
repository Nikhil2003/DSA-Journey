// Longest arithmetic subarray, this question was came in kickstart;
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
     int ans=2;
     int curr=2;
     int d = arr[1]-arr[0];
     int j=2;
     while(j<n)
     {
        if(arr[j]-arr[j-1] == d)
        {
            curr++;
        }
        else
        {
            d=arr[j]-arr[j-1];
            curr=2;
        }
        ans = max(ans,curr);
        j++;
     }
    cout<<ans<<endl;
    return 0;
}

/*
#include<iostream>
using namespace std;

int main()
{
    int n,pl=0,c1,c2=0,i,j,c3=0,l=0;
    cout <<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            c1 = arr[i]-arr[j];
            c2 = arr[i+1]-arr[j+1];
            if(c1==c2)
            {
                c3=c1;
                if(c3==c2)
                {
                l=l+2;
                j++;
                i++;
                c3=c2;
                }
            }
            else
            {
                l=0;
                c3=c1;
                if(c1==c2)
                {
                    l=l+2;
                }
            }
        pl= max(pl,l);
        }
    }
    cout<<"the length of subarray is "<<pl;
    return 0;
}*/