#include<iostream>
using namespace std;
int main(void)
{
    int n, k, counter=0; cin>>n>>k;
    int *arr=new int[n];
    for(int i=0; i<n; i++)cin>>arr[i];

    for(int i=0; i<n; i++)if(arr[i]>0 && arr[i]>=arr[k-1])counter++;

    cout<<counter<<endl;
    return 0;
}
