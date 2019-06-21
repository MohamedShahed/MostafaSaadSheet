#include<iostream>
using namespace std;
int main(void)
{
   int n , h;
   int counter=0;
   cin>>n>>h;
   while(n<=h)
   {
   n*=3;
   h*=2;
   counter++;
   }
   cout <<counter;

   return 0;

}
