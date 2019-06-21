#include<iostream>
#include<string>
using namespace std;
void convert(string &str);
int main(void)
{

    string str_1;
    string str_2;
    cin>>str_1;
    cin>>str_2;
    convert(str_1);
    convert(str_2);
    if(str_1>str_2)cout<<1<<endl;
    else if(str_1<str_2)cout<<-1<<endl;
    else cout<<0<<endl;

return 0;

}
void convert(string &str)
{
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]<'a')str[i]+=32;
    }
}
