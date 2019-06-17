#include<iostream>
#include<math.h>
using namespace std;
int main(void)
{
    int a, b;
    cin>>a>>b;
    int m=max(a, b);
    if(m==1)cout<<"1/1";
    else if(m==2)cout<<"5/6";
    else if(m==3)cout<<"2/3";
    else if(m==4)cout<<"1/2";
    else if(m==5)cout<<"1/3";
    else if(m==6)cout<<"1/6";

    return 0;

}
