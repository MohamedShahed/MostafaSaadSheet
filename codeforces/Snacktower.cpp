#include<iostream>
using namespace std;
int main(void)
{
    int n, in; cin>>n;
    int *arr=new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>in;
        arr[in-1]=i+1;
    }

    int row=1;
    for(int i=n; i>0; --i)
    {
        if(arr[i-1]==row)cout<<i<<" ";
        else
        {
            for(; row<arr[i-1]; row++)cout<<endl;
            cout<<i<<" ";
        }
    }

    return 0;

}
