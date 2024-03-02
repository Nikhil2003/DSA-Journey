//remove the duplicate character from the string using recursion.
#include<iostream>
using namespace std;

string removeDup(string s)
{
    if(s.length()==0)
    {
        return " ";
    }
    char ch=s[0];
    string ans = removeDup(s.substr(1));
    if(ch==ans[0])
    {
        return ans;
    }
    return ch+ans;
}

int main()
{
    string str;
    cout<<"enter the string with repeated character"<<endl;
    getline(cin,str);
    cout<<removeDup(str);
    return 0;
}