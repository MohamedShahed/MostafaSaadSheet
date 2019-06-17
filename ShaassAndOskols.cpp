#include<iostream>
using namespace std;

int main(void)
{

    int n, m, x, y;
    cin>>n;
    int *arr=new int[n];
    int *up=NULL;
    int *down=NULL;

    for(int i=0; i<n; i++)cin>>arr[i];

    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>x>>y;
        x--;
        up=&arr[x-1];
        down=&arr[x+1];
        if(up>=&arr[0])
        {
            (*up)+=(arr[x]-(arr[x]-y))-1;
        }
        if( down<=&arr[n-1])
        {
            (*down)+=(arr[x]-y);
        }
        arr[x]=0;

    }
    for(int i=0; i<n; i++)cout<<arr[i]<<endl;

    return 0;

}
