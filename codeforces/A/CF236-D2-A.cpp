#include<iostream>
#include<string>
using namespace std;
bool Is_here(char ch, string ans);
int main(void)
{
   string input;
   cin>>input;
   string ans="";
   for(int i=0; i<input.size(); i++)
   {
    if(!Is_here(input[i], ans))ans+=input[i];
   }

   if(ans.size()%2==0)cout<<"CHAT WITH HER!\n";
   else cout<<"IGNORE HIM!\n";


   return 0;

}
bool Is_here(char ch, string ans)
{
    for(int i=0; i<ans.size(); i++)
    {
        if(ch==ans[i])return 1;
    }
    return 0;
}
