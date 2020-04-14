#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
int main(void)
{
    int n; cin>>n;
    int input1, input2;
    vector<int>a,b;
    while(n!=0)
    {
        cin>>input1>>input2;
        a.push_back(input1);
        b.push_back(input2);
        n--;
    }
 
    if(a!=b)cout<<"rated";
    else
    {
 
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
        if(a!=b)cout<<"unrated";
        else cout<<"maybe";
 
    }
 
 
    return 0;
 
}
