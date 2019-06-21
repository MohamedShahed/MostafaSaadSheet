#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    string str; cin>>str;
    for(int i=0; i<str.size()-1;i+=2)
    {
        for(int j=i+2 ; j<str.size(); j+=2)
        {
            if(str[i]>str[j])swap(str[i], str[j]);
        }
    }
    cout<<str<<endl;
    return 0;
}
