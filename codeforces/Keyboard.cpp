#include<iostream>
#include<string>
using namespace std;
char search(char ch, char dir);

string Keyboard="qwertyuiopasdfghjkl;zxcvbnm,./";

int main(void)
{
    char dir; cin>>dir;
    string str; cin>>str;

    for(int i=0; i<str.size(); i++)cout<<search(str[i], dir);



    return 0;
}
char search(char ch, char dir)
{
    for(int i=0; i<Keyboard.size(); i++)
    {
        if(Keyboard[i]==ch)
            return (dir=='R'?Keyboard[i-1]:Keyboard[i+1]);
    }
}
