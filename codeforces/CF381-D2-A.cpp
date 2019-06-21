#include<iostream>
using namespace std;
int main(void)
{
	int n; cin>>n;
	int *arr=new int[n];
	for(int i=0; i<n; i++)cin>>arr[i];

	int *lift=arr;
	int *right=&arr[n-1];

	int S_counter=0, D_counter=0;

	int turn=1;
	while(right>=lift)
	{
		if(turn==1)
		{
			if(*right>*lift){S_counter+=*right--;}
			else {S_counter+=*lift++;}

			turn=0;
		}
		else
		{
			if(*right>*lift){D_counter+=*right--;}
			else {D_counter+=*lift;lift++;}
			turn=1;
		}
	}

	cout<<S_counter<<" "<<D_counter<<endl;

	delete[]arr;
	return 0;

}
