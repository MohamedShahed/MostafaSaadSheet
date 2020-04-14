#include<iostream>
#include<string>

using namespace std;
int main(void)
{
    string str;cin>>str;
    string ans="";
    int turn=0;
    for(int i=0 ; i<str.size(); i++)
    {
        if(str[i]=='W'&& str[i+1]=='U' && str[i+2]=='B'){i+=2;if(turn==1)ans+=" ";turn=0;
            continue; }
        else {ans+=str[i];turn=1;}

    }
    cout<<ans<<endl;

    return 0;

}
