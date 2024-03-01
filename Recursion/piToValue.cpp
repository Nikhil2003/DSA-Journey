//change the string and replace "pi" with "3.14"
//eg:- pippxxppiixipi
#include <iostream>
using namespace std;
void replace(string str)
{
    if(str.length()==0)
      return;
    
    if(str.substr(0,2) == "pi")
    {
        cout<<"3.14";
        replace(str.substr(2));
    }
    else
    {
        cout<<str[0];
        replace(str.substr(1));
    }
}

int main()
{
    string str;
    cout<<"enter the string "<<endl;
    getline(cin,str);
    replace(str);
    return 0;
}