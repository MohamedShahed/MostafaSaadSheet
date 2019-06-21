#include<iostream>
#include<string>
using namespace std ;
int main(void)
{
  string input;
  cin>>input;
  if(input[0]>='a')input[0]-=32;
  cout<<input<<endl;

return 0;
}
