#include<iostream>
using namespace std;
int main(void)
{
    int arr[3]={0};
    int n, input; cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>input;
            arr[j]+=input;
        }
    }

    cout<<(arr[0] ==0 && arr[1]==0 && arr[2]==0?"YES": "NO");
    return 0;

}
