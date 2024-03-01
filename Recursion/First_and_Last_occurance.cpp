//Give the index of first and last occurance of the given number by using Recursion;
#include<iostream>
using namespace std;

int first(int arr[],int n,int i, int key)
{
    if(i==n)
      return -1;

    if(arr[i]==key)
      return i;
    
    return first(arr,n,i+1,key);
}
int last(int arr[],int n,int i, int key)
{
    if(i<0)
      return -1;

    if(arr[i]==key)
      return i;
    
    return first(arr,n,i-1,key);
}
//alterrnate method of above code.
/*int last(int arr[],int n,int i, int key)
{
    int restArray = last(arr,n,i+1,key);
    if(restArray!=-1)
    {
      return restArray;
    }

    if(arr[i]==key)
      return i;
    
    return -1;
}*/




int main()
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array element"<<endl;
    for(int i=0; i<n; i++)
      cin>>arr[i];
    
    cout<<"enter the key"<<endl;
    int key;
    cin>>key;
  
    
    cout<<"first occurance is at index "<< first(arr,n,0,key)<<endl;
    cout<<"last occurance is at index "<< last(arr,n,n-1,key)<<endl;
    return 0;
}