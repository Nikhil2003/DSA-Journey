//spiral order matirx transversal
#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"enter the size of the matrix"<<endl;
    cin>>n>>m;
    int a[n][m];
    cout<<"enter the element in the matrix\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    
    int rs=0, re = n-1, cs=0, ce=m-1;
    while(rs<=re && cs<=ce)
    {
        for(int col = cs; col<= ce; col++)
            cout<< a[rs][col]<<" ";
        rs++;

        for(int row = rs; row<= re; row++)
            cout<< a[row][ce]<<" ";
        ce--;

        for(int col = ce; col>=cs; col--)
            cout<< a[re][col]<<" ";
        re--;
        
        for(int row = re; row>=rs; row--)
            cout<< a[row][cs]<<" ";
        cs++;
    }
    return 0;
}