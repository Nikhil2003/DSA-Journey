#include<iostream>
using namespace std;

int main()
{
    string str = "(()())(())";
    string s="";
    int open=0, close=0;
    int l= str.length();
    // cout<<l;
    for(int i=0; i<l; i++)
    {
        if(str[i]=='(')
          open +=1;
        else
          close +=1;

        if(close ==1) 
        {
            open-=1;
            close=0;
            if(open==1)
            {
                s=s+"()";

            }
        }
    }
    cout<<s;
    return 0;
}