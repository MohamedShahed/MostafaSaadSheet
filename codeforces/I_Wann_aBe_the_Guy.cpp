#include<iostream>
#include<set>

using namespace std;
int main(void)
{
    int n; cin>>n;
    int sum=(n*(n+1))/2;
    int input;
    set<int>s;

    int p, q;
    cin>>p;
    while(p!=0)
    {
        cin>>input;
        s.insert(input);
        p--;
    }
    cin>>q;
    while(q!=0)
    {
        cin>>input;
        s.insert(input);
        q--;
    }

    int sumSet=0;
    auto first = s.begin();
    for(int i=0; i<s.size(); i++)sumSet+=*first++;

    if(sum==sumSet)cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";

    return 0;

}
