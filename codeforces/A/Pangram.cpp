#include<iostream>
#include<set>
using namespace std;
int main(void)
{
    int n; cin>>n;
    if(n<26){cout<<"NO";return 0; }

    set<char>s;
    char ch;
    for(int i=0; i<n; i++){
        cin>>ch;
        s.insert(tolower(ch));
    }
    if(s.size()<26)cout<<"NO";
    else cout<<"YES";

    return 0;

}
