#include<iostream>
#include<cmath>
using namespace std;

long long get_Distance(long long a, long long b);

int main(void)
{
    int n; cin>>n;
    long long *arr=new long long [n];
    for(int i=0; i<n; i++)cin>>arr[i];

    long long Min, Max;

    for(int i=0; i<n; i++)
    {
        Max=max(get_Distance(arr[i], arr[0]), get_Distance(arr[i], arr[n-1]));
        if(i==0)Min=get_Distance(arr[i], arr[i+1]);
        else if(i==n-1)Min=get_Distance(arr[i], arr[i-1]);
        else Min=min(get_Distance(arr[i], arr[i-1]), get_Distance(arr[i], arr[i+1]));
        cout<<Min<<" "<<Max<<endl;
    }
    delete []arr;
    return 0;

}

long long get_Distance(long long a, long long b)
{
    if((a<0 && b>0) || (a>0 && b<0))return abs(a)+abs(b);
    if(a==b)return 0;
    int ans;
    ans=abs(abs(a)-abs(b));
    return ans;
}
