#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    int n; cin>>n;
    string *arr=new string[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i].size()>10)cout<<arr[i][0]<<arr[i].size()-2<<arr[i][arr[i].size()-1]<<endl;
        else cout<<arr[i]<<endl;
    }


    return 0;

}
