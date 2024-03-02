//Move all x to the end of the string
//eg:- axxbdxcefxhix
#include<iostream>
using namespace std;

string shift(string str)
{
    if(str.length()==0)
    {
        return "";
    }
    char ch=str[0];
    string ans = shift(str.substr(1));
    if(ch == 'x')
    {
        return ans+ch;
    }
    return ch+ans;
}

int main()
{
    string str;
    cout<<"enter the string with repeated character"<<endl;
    getline(cin,str);
    cout<<shift(str);
    return 0;
}