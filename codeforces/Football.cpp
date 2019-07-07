#include<iostream>
#include<string>
using namespace std ;

int main(void)
{
   int n; cin>>n;
   string team1, team2="empty", input;

   int counter_T1=0, counter_T2=0;

   for(int i=0;i<n; i++)
   {
       if(i==0){cin>>team1;counter_T1++;}
       else {

           cin>>input;
           if(input==team1)counter_T1++;
           else if(team2=="empty"){team2=input; counter_T2++;}
           else counter_T2++; 
       }
   }
    cout<<(counter_T1>counter_T2?team1:team2);
    return 0;

}
