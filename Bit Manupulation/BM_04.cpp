//WAP to find a unique number in an array where all number except one  are present twice;
// {1,3,2,3,4,2,1,1,3,2}
#include<iostream>
using namespace std;

bool getBit(int n, int pos)
{
    return ((n & (1<<pos))!=0);
}

int setBit(int n, int pos)
{
    return (n | (1<<pos));
}

int unique(int arr[], int n)
{
    int result=0;
    for(int i=0; i<64; i++)
    {
        int count=0;
        for(int j=0; j<n; j++)
        {
            if(getBit(arr[j],i))
            {
                count++;
            }
        }
        
        if(count%3!=0)
        {
            result = setBit(result,i);
        }
    }
    return result;
}

int main()
{
    int arr[10];
    cout<<"enter the element in the array"<<endl;
    for(int i=0;i<10;i++)
    cin>>arr[i];
    cout<<"the unique number is "<<unique(arr, 10);
    
    return 0;
}

