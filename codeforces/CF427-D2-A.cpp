#include<iostream>
using namespace std;
int main(void)
{
	int n;cin>>n;
	int police_number=0, counter=0, input;
	for(int i=0; i<n; i++)
	{
		cin>>input;
		if(input>0)police_number+=input;
		else
		{
			if(police_number>0)
			{
				police_number--;
			}
			else counter++;


		}
	}
	cout<<counter<<endl;



	return 0;

}
