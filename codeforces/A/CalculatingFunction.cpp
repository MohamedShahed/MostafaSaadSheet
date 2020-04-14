#include<iostream>
#include<cmath>

using namespace std;
int main(void)
{

    long long int n; cin>>n;
    long long int ans2=(n%2==0?n/2:(n/2)-n);
    cout<<ans2<<endl;

    return 0;

}
