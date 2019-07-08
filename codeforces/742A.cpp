#include<iostream>
 
using namespace std;
int main(void)
{
    long long int n; cin>>n;
    if(n==0){cout<<1<<endl; return 0;}
    int arr[4]={8, 4, 2, 6};
    n=(n-1)%4;
    cout<<arr[n]<<endl;
 
 
 
 
    return 0;
 
}
