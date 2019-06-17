#include<iostream>
using namespace std;
int main(void)
{
    int n; cin>>n;
    int *col_1=new int[n];
    int *col_2=new int[n];
    int counter=0;

    for(int i=0; i<n; i++)cin>>col_1[i]>>col_2[i];

    for(int i=0; i<n-1; i++)
    {
        swap(col_1[i], col_2[i]);
        for(int j=i+1; j<n; j++)
        {
            if(col_1[i]==col_1[j])counter++;
            if(col_2[i]==col_2[j])counter++;

        }
    }
    cout<<counter<<endl;


    delete[]col_1, col_2;
    return 0;

}
