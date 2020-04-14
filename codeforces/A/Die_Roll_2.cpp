#include<iostream>
using namespace std;

int main(void){

    int Y,W ;
    cin>>Y>>W;

    int numerator=7-max(Y,W);
    int denominator=6;

    if(denominator%numerator==0) {
        denominator/=numerator;
        numerator /= numerator;

    }
    else if(numerator%2==0){
        denominator/=2;
        numerator/=2;
    }

    cout<<numerator<<"/"<<denominator<<endl;

    return 0;

}
