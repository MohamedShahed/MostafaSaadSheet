#include <iostream>
using namespace std;
int main(void)
{
    int n, h, counter=0;
    cin>>n>>h;
    int input=0;
    while(n>0)
    {
        cin>>input;
        if(input>h)counter+=2;
        else counter++;
        n--;
    }
    cout<<counter<<endl;


    return 0;


}
