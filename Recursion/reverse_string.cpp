//reverse the string using recursion
#include<iostream>
using namespace std;

void reverse(string str)
{
    if(str.length()==0)
      return;
    
    string ros = str.substr(1);
    reverse(ros);
    cout<<str[0];
}

int main()
{
    string str;
    cout<<"enter the string "<<endl;
    getline(cin,str);
    reverse(str);
    return 0;
}