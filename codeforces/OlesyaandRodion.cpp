#include<iostream>
using namespace std;
int main(void)
{
    int n, t;
    cin>>n>>t;

    if(n==1 && t==10){cout<<"-1"<<endl;return 0; }


    while(t>=10)t/=10;

    cout<<t; for(int i=0; i<n-1; i++)cout<<0;

    cout<<endl;





    return 0 ;
}
