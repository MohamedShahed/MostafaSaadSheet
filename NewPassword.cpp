#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    char arr[27]={"abcdefghijklmnopqrstuvwxyz"};
    int n, k;
    cin>>n>>k;
    string distinctLetters;
    string newPassword;

    for(int i=0; i<k; i++)
    {
        distinctLetters+=arr[i%26];
    }
    if(n==k)cout<<distinctLetters<<endl;
    else {
        int g=n/k;
        int index=0;
        for(int i=0; i<g; i++)newPassword+=distinctLetters;
        while(newPassword.size()<n)
        {
            newPassword+=distinctLetters[index++%k];
        }
        cout<<newPassword<<endl;
    }


    return 0;

}
