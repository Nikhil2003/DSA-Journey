#include<iostream>
using namespace std;

int main()
{
    cout<<"size of aray"<<endl;
    int n; int maxi= 0;
    cin>>n;
    int original[n], sorted[n];
    cout<<"enter the element in the array"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>original[i];
        sorted[i]=0;
    }
    for(int i=0; i<n; i++)
    {
        // cout<<"enter in max"<<endl;
        if(original[i]>maxi)
          maxi=original[i];
    }
        cout<<maxi<<endl;
    int count[10]={0};
   
    for(int i=0; i<n; i++)
    {
        // cout<<"for inserting element in count"<<endl;
        count[original[i]]++;
    }
        int sum=0;
    for(int i=0; i<maxi; i++)
    {
        count[i] = sum+count[i];
    }
    // cout<<"sum of prev data in count is done"<<endl;
    for(int i=n-1; i>=0; i--)
    {
        int j=original[i];
        count[j]=count[j]-1;
        int val =count[j];
        sorted[val]=j;
    }
    // cout<<"inserted in sorting"<<endl;
    cout<<"sorted array"<<endl;
    for(int i=0; i<n; i++)
      cout<<sorted[i];
    
    return 0;
}

/*
  void countSort(int arr[], int n)
  {
    int k = arr[0];
    for(int i=0; i<n; i++)
    {
        k=max(k,arr[j]);
    }
    int count[k]={0};
    for(int i=0; i<n; i++)
    {
        count[arr[i]]++;
    }
     
    for(int i=1; i<=k; i++){
        count[i] += count[i-1];
    }
    int output[n];
    for(int i=n; i>=0; i--)
    {
        output[--count[arr[i]]] = arr[i];
    }
    for(int i=0; i<n; i++)
    {
        arr[i]=output[i];
    }
  }
*/