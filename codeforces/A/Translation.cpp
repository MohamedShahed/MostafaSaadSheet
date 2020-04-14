#include<iostream>
#include<cstring>
using namespace std;

const int N=100;

int main(void)
{
    char arr1[N];
    char arr2[N];

    cin>>arr1>>arr2;

    char *ptr1=arr1;
    char *ptr2=&arr2[strlen(arr2)-1];

    bool status=true;
   for(int i=0; i<strlen(arr1); i++)
   {
       status&=(*(ptr1)==*(ptr2));
       ptr1++;
       ptr2--;
   }

   if(status)cout<<"YES";
   else cout<<"NO";

    return 0;

}
