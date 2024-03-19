#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10,16,7,14,5,3,12,9};
    int c=0;
    int l = sizeof(arr)/sizeof(int);
     for(int i=0; i<20; i++)
        {
            if(c!=l)
            {

                for(int j=0; j<l; j++)
                {
                    if(i == arr[j])
                    {
                        arr[j]=c;
                        c++;
                    }
                }
            }
            else 
              break;
        }
    for(int i=0; i<l;i++)
       cout<<arr[i]<<" ";
    return 0;
}