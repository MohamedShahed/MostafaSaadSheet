#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    char ch;
    int counter_A=0;
    int counter_D=0;
    while(n>0)
    {
        cin>>ch;
        if(ch=='A')counter_A++;
        else counter_D++;

    n--;
    }

    if(counter_A>counter_D)cout<<"Anton\n";
    else if(counter_D>counter_A)cout<<"Danik\n";
    else cout<<"Friendship\n";


return 0;
}
