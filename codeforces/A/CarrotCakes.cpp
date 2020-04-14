#include <iostream>
#include <math.h>
using namespace std  ;
int main(){


    int n=0, t=0, k=0, d=0;
    cin>>n>>t>>k>>d;
    int t1=0, sum2=0, t2=d;
    sum2+=(d/t)*k;
    t1+=(n>=k?ceil(n*1.0/(k*1.0))*t:t);
    while(sum2<n){
        sum2+=2*k;
        t2+=t;
    }
    if(t2<t1)cout<<"YES\n";
    else cout<<"NO\n";



    return 0;
}
