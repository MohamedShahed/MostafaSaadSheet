#include<iostream>
#include<cstring>
#include<string>
using namespace std;

const int N=101;

int main(void)
{
    char arr[N];cin>>arr;
    string ans="";
    for(int i=0; i<strlen(arr); i++)
    {
        if(arr[i]>=65 && arr[i]<=90)arr[i]+=32;
        if(arr[i]=='a'|| arr[i]=='e'|| arr[i]=='i'|| arr[i]=='o'||arr[i]=='u'||arr[i]=='y')
            continue;
        ans+=".";
        ans+=arr[i];
    }

    cout<<ans<<endl;
    return 0;

}
