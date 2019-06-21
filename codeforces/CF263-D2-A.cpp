#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{
  int matrix[5][5];
  int N_swapping;
  for(int i=0; i<5; i++)
  {
    for(int j=0; j<5; j++)
    {
        cin>>matrix[i][j];
        if(matrix[i][j]==1)N_swapping=(abs(i-2)+abs(j-2));
    }
  }

  cout<<N_swapping<<endl;


  return 0;
}
