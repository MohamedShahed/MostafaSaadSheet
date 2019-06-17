#include<iostream>
using namespace std;
int main(void)
{
    int n, b, d, counter=0, total=0;
    cin>>n>>b>>d;
    int *arr=new int[n];
    for(int i=0; i<n; i++)cin>>arr[i];

    for(int i=0; i<n; i++)
    {
        if(arr[i]<=b)total+=arr[i];
        if(total>d){counter++; total=0; }
    }
    cout<<counter<<endl;
    return 0;

}
