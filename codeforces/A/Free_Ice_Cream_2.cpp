#include<iostream>
using namespace std;

int main(void){

    int n; long long x,d;cin>>n>>x;

    char sign;
    int distressChild=0;
    while(n){
        cin>>sign>>d;
        if(sign=='+'){
            x+=d;
        }
        else if(sign=='-' && d<=x){
            x-=d;
        }
        else {
            distressChild++;
        }
        n--;
    }

    cout<<x<<" "<<distressChild<<endl;

    return 0;

}
