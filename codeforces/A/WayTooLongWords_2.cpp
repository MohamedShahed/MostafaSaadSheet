#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{

    int n, siz; cin>>n;
    char ** arr=new char*[n];
    for(int i=0; i<n; i++)arr[i]=new char[100];

    for(int i=0; i<n; i++)cin>>arr[i];
    for(int i=0; i<n; i++)
    {
        siz=strlen(arr[i]);
        if(siz>10)cout<<arr[i][0]<<siz-2<<arr[i][siz-1]<<endl;
        else cout<<arr[i]<<endl;
    }

    for(int i=0; i<n; i++)delete []arr[i];
    delete arr;
    return 0;

}
