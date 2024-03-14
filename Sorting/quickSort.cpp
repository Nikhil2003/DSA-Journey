#include<iostream>
using namespace std;

    void quickSort(int arr[], int l, int r)
    {
        if(l<r){

        int pi = partition(arr,l,r);
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
        }

    }
    int partition(int arr[],int l,int r)
    {
        int pivot = arr[r];
        int i=l-1;
        for(int j=l; j<r; j++)
        {
            if(arr[j]<pivot)
            {
                i++;
                swap(arr,i,j);

            }
        }
    swap(arr,i,j);
   return i+1;
    }
int main()
{

    return 0;
}