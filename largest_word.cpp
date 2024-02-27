//How to find the largest word in the statment
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
int main()
{
  int n;
  cin>>n;
  cin.ignore();  //to clean the upcoming buffer
  char arr[n+1];
  cin.getline(arr,n);
  cin.ignore();
  int i=0;
  int currLen=0;
  int maxLen=0;
  int st=0,maxst=0;
  while(1)
  {

    if(arr[i]=='\0')
     break;
    if(arr[i]==' ' || arr[i]=='\0')
    {
        if(currLen> maxLen)
        {
            maxLen= currLen;
            maxst=st;

        }
        currLen=0;
        st=i+1;

    }
    else
      currLen++;
    i++;
  }
  cout<<maxLen<<endl;
  for(int i=0; i<maxLen; i++)
    cout<<arr[i+maxst];

return 0;
}
