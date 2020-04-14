#include<iostream>
#include<cmath>

using namespace std;
int main(void)
{
    long long int n, k;
    cin>>n>>k;

    if(n%2==0)
    {
        if(k<=(n/2))cout<<(k*2)-1;
        else cout<<(k-(n/2))*2<<endl;
    }
    else
    {
        long long midpoint=(n/2)+1;
        if(k<=midpoint)cout<<(k*2)-1;
        else cout<<(k-midpoint)*2<<endl;

    }


    return 0;

}
