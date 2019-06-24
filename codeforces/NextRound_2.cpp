#include<iostream>
using namespace std;
int main(void)
{
    int n, k;
    cin>>n>>k ;
    int counter=0, input=0;
    int condition;
    for(int i=0; i<k; i++)
    {
        if(cin>>input && input>0)counter++;
        if(i==k-1)condition=input;
    }
    for(int i=k; i<n; i++)
    {
        if(condition!=0 && cin>>input && input>=condition)counter++;
    }

    cout<<counter<<endl;
    return 0;

}
