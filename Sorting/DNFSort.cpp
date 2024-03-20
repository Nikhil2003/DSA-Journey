#include<iostream>
using namespace std;

void swap(int arr[], int i , int j)
    {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

void dnfsort(int arr[], int n)
    {
        int mid=0;
        int low=0;
        int high=n-1;
        while(mid<=high)
        {
            if(arr[mid] ==0)
            {
                swap(arr,low,mid);
                low++;
                mid++;
            }
            else if(arr[mid]==1)
            {
                mid++;
            }
            else 
            {
                swap(arr,mid,high);
                high--;
            }
        }
    }

int main()
{
    int n;
    cout<<"enter the number of element in the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element in the array"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
 
    dnfsort(arr,n);
    for(int i=0; i<n; i++)
      cout<<arr[i]<<" ";
    return 0;
}