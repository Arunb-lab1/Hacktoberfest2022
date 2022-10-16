//WAP to print hollow sphere 
#include <iostream>
using namespace std;

int main() 
{
  int i,j,s;
  cout<<"Enter size of square: ";
  cin>>s;
  for(i=1;i<=s;i++) 
  {
    for(j=1;j<=s;j++) 
    {
      if(i==1 || i==s)
       {
        cout<<"*";
       }

      else if(j==1 || j==s) 
        {
          cout<<"*";
        }
        else 
        {
          cout<<" ";
        }

    }
    cout<<"\n";
  }
  return 0;
}
