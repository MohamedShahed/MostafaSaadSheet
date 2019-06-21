#include<iostream>
#include<string>
using namespace std;
void to_lower(string &str);
void to_upper(string &str);
int main(void)
{
  string input;
  cin>>input;
  int upper=0;
  int lower=0;
  for(int i=0; i<input.size(); i++)if(input[i]<'a')upper++;
  lower=input.size()-upper;

  if(upper>lower)to_upper(input);
  else to_lower(input);
  cout<<input<<endl;




  return 0;
}

void to_upper(string &str)
{
    for(int i=0 ; i<str.size(); i++)
    {
        if(str[i]>='a' && str[i]<='z')str[i]-=32;

    }
}
//=================================================
void to_lower(string &str)
{
    for(int i=0 ; i<str.size(); i++)
    {
        if(str[i]>='A' && str[i]<='Z')str[i]+=32;

    }
}
