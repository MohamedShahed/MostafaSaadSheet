#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
    int n; cin>>n;
    int total=0, in, counter=0, sum=0;
    int *arr=new int[n];
    for(int i=0; i<n; i++){
        cin>>in;
        arr[i]=in;
        total+=in;
    }
    sort(arr, arr+n);
    reverse(arr, arr+n);
    for(int i=0; i<n; i++)
    {
       sum+=arr[i];
       if(sum>(total-sum)){cout<<++counter; return 0; }
       else counter++;
    }
    return 0;

}
