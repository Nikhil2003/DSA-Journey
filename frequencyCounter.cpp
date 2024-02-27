//Count the frequency of the character in the string;
#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string"<<endl;
    getline(cin,str);
    int freq[26];
    for(int i=0; i<26; i++)
      freq[i]=0;
    
    for(int i=0; i<str.size(); i++)
    {
        freq[str[i]-'a']++;
    }
    char ans='a';
    int c=0;
    for(int i=0; i<26; i++)
    {
        if(freq[i]> c)
        {
            c=freq[i];
            ans = i + 'a';
        }
    }
    cout<<ans<<" number of times "<<c<<endl;
    return 0;
}