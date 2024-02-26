//search the given number in the matrix by using different method;
#include<iostream>
using namespace std;

int main()
{
    int n,m,i,j;
    bool found = false;
    cout<<"enter the size of the matrix"<<endl;
    cin>>n>>m;
    int a[n][m];
    cout<<"enter the element in the matrix\n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter the number u want to search in the matrix\n";
    int num;
    cin>>num;
    i=0,j=m-1;
    while(i<n && j>=0)
    {
        if(a[i][j] == num)
        {
            found= true;
        }
        if(a[i][j]>num)
          j--;
        else
          i++;
    }
    if(found)
      cout<<"element is found\n";
    else
      cout<<"element not found\n";
    
    return 0;
}