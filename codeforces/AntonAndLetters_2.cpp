#include<iostream>
#include<cstring>
#include<string>

using namespace std;

const int N=1000;

int main(void)
{
    int index=0;
    string str;
    getline(cin, str, '}');
    char arr[N];


    for(int i=0; i<str.size(); i++)
    {
        if(str[i]!=' ' && str[i]!=',' && str[i]!='{')arr[index++]=str[i];
    }

    int counter=0;
    for(int i=0; i<index-1; i++)
    {
        bool s=true;
        for(int j=i+1; j<index; j++)
        {
            s&=(arr[i]!=arr[j]);
        }
        if(s)counter++;
    }
    if(index==0)cout<<0<<endl;
    else
         cout<<counter+1<<endl;
    return 0;

}
