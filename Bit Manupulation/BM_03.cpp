//WAP to find the 2unique numbers in an array where all numbeers except two aree present twice:-
// {2,4,6,7,4,5,6,2}

#include<iostream>
using namespace std;

bool setBit(int n, int pos)
{
    return (n & (1<<pos))!=0;
}

void unique(int arr[], int n)
{
    int xorsum=0;
    for(int i=0; i<n; i++)
    {
        xorsum=xorsum^arr[i];
    }
    int tempxorsum = xorsum;
    int pos=0;
    int setbit=0;
    while(setbit != 1)
    {
        setbit = xorsum & 1; //to check the the rightmost bit is 1 or not
        pos++; //yha par nahi mila isiliye plus 1 kar diya;
        xorsum= xorsum>>1; //for shifting.
    }

    int newxorsum=0;
    for(int i=0; i<n; i++)
    {
        if(setBit(arr[i], pos-1))
        {
            newxorsum = newxorsum^arr[i];
        }
    }
    int unique1 = newxorsum;
    int unique2 = tempxorsum ^ newxorsum ;
    cout<< "the two unique number is "<<endl;
    cout<< unique1 <<endl<< unique2;
}

int main()
{
     int arr[6];
    cout<<"enter the element in the array"<<endl;
    for(int i=0;i<6;i++)
      cin>>arr[i];
    cout<<"the unique number is "<<endl;
    unique(arr, 6);
    return 0;
}