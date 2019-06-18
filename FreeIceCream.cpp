#include<iostream>
using namespace std;
int main(void)
{

    int n;
    int   x,in;
    cin>>n>>x;
    long long amount=x;
    char ch; int counterOfDistress=0;
    while(n>0)
    {
        cin>>ch; cin>>in;
        if(ch=='+')amount+=in;
        else {
            if(amount>=in)amount-=in;
            else counterOfDistress++;

        }
        n--;

    }
    cout<<amount<<" "<<counterOfDistress<<endl;

    return 0;

}
