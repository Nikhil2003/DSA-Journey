//convert the string in to upper case and in to lower case using function and without using function;
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

/*int main()
{
    string str;
    cout<<"enter the string\n";
    getline(cin,str);
    cout<<"string in uppercase\n";
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] -=32;
        }
    }
    cout<<str<<endl;
    cout<<"string in lowercase\n";
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] +=32;
        }
    }
    cout<<str;
    return 0;
}*/

//By using function.

int main(){
    string str;
    cout<<"enter the string\n";
    getline(cin,str);
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<endl;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str<<endl;
    return 0;
}