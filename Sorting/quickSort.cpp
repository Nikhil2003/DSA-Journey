#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int partition(int arr[], int l, int r);


void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {

        int pi = partition(arr, l, r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int j;
    int i = l - 1;
    for (j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i+1, r);
    return i + 1;
}


int main()
{
    int arr[]= {5,4,45,7,24,0,87,3,2,1};
    quickSort(arr,0,9);
    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}