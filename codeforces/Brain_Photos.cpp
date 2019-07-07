#include<iostream>
using namespace std;

int main(void)
{
    int n, m ;cin>>n>>m;

    char input;
    bool isColor=false ;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>input;
            if(input=='C' || input=='M' || input=='Y')isColor=true;

        }
    }

    if(isColor)cout<<"#Color";
    else cout<<"#Black&White";
    return 0;

}
