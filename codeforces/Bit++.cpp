#include<iostream>
using namespace std;
int main(void)
{
    char input[4];
    int n; cin>>n;
    int x=0;
    while(n>0)
    {
        cin>>input;
        if(input[0]=='+')x++;
        else if(input[0]=='-')x--;
        else x+=(input[1]=='+'?1:-1);
        n--;

    }
    cout<<x<<endl;


    return 0;

}
