#include<iostream>
using namespace std;
 
int main(void)
{
    int n; cin>>n;
    char **grid=new char*[n];
    for(int i=0; i<n; i++)grid[i]=new char[n];
 
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>grid[i][j];
        }
    }
 
    bool diagonal=true;
    char condition=grid[0][0];
    for(int i=0; i<n; i++)diagonal&=(grid[i][i]==condition);
    for(int i=0; i<n; i++)diagonal&=(grid[i][n-i-1]==condition);
 
    char secondChar=grid[0][1];
 
    if(diagonal && secondChar!=condition)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==j || j==(n-i-1))continue;
                diagonal&=(grid[i][j]==secondChar);
            }
        }
    }
    else diagonal=false ;
 
    if(diagonal)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
    for(int i=0; i<n; i++)delete[]grid[i];
    delete[]grid;
    return 0;
}
