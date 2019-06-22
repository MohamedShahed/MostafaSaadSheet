#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    string a, b;
    cin>>a>>b;

    if(a==b)
    {
        bool s=true;
        for(int i=0; i<a.size(); i++)s&=(a[i]==b[i]);
        if(s)cout<<"-1"<<endl;
        else cout<<a.size()<<endl;
    }
    else cout<<(a.size()>b.size()?a.size():b.size())<<endl;



    return 0;

}
