#include<iostream>
using namespace std;
int main(void)
{
    int n; cin>>n;
    int *arr=new int[n];
    for(int i=0; i<n; i++)cin>>arr[i];

    int *ans=new int[n];
    for(int i=0; i<n; i++)ans[arr[i]-1]=i+1;

    for(int i=0; i<n; i++)cout<<ans[i]<<" ";
    delete []arr;
    delete []ans;

    return 0;
}
