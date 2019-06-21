#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{
    unsigned int n;
    unsigned int sq;

    while(cin>>n && n!=0)
    {
        sq=sqrt(n);
        cout<<((sq*sq)==n?"yes\n": "no\n");
    }


    return 0;

}
