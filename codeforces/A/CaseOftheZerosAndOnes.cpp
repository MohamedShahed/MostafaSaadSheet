#include<iostream>
#include<cmath>
#include<string>
using namespace std ;
int main(void)
{
    long long int n;cin>>n;
    string str;cin>>str;

    int counter_one=0, counter_zero=0;
    for(int i=0; i<str.size(); i++) {

        if (str[i] == '0')counter_zero++;
        else counter_one++;

    }
    cout<<abs(counter_one - counter_zero)<<endl;


    return 0;

}
