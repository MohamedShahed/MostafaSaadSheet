#include<iostream>
#include<cmath>
#include<queue>
using namespace std;
int main(void)
{
    int n; cin>>n ;
    int counterOne=0, counterTwo=0, counterThree=0;
    queue<int> one;
    queue<int>two;
    queue<int>three;
    int *arr=new int[n];

    int input;
    for(int i=0; i<n; i++)
    {
        cin>>input;
        if(input==1){counterOne++;one.push(i+1);}
        else if(input==2){counterTwo++;two.push(i+1);}
        else {counterThree++;three.push(i+1); }

        arr[i]=input;
    }

    int NumberOfTeams=min(min(counterOne, counterTwo), counterThree);

    cout<<NumberOfTeams<<endl;
    for(int i=0; i<NumberOfTeams; i++)
    {

        cout<<one.front()<<" "<<two.front()<<" "<<three.front()<<endl;
        one.pop(); two.pop(); three.pop();
    }

    delete []arr;
    return 0;

}
