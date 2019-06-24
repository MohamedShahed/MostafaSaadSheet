#include <iostream>
#include <algorithm>
using namespace std ;
int main(){

    int n=0, counter=0;cin>>n;
    long long int*arr=new long long int[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    sort(arr, arr+n);
    for(int i=1; i<n-1; i++){
        if(arr[i]>arr[0] && arr[i]<arr[n-1])counter++;
    }
    cout<<counter<<endl;

    delete[]arr;
    return 0;
}
