#include<iostream>
using namespace std ;
int main(void)
{
  int n;
  cin >>n;
  int input, counter_1, counter_2=0;
  while(n>0)
  {
    counter_1=0;
    for(int i=0; i<3; i++)
    {
        cin>>input;
        counter_1+=input;
    }
    counter_2+=(counter_1>1?1:0);
    n--;

  }
  cout<<counter_2<<endl;

  return 0;

}
