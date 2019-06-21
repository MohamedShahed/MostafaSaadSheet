#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int n=0;cin>>n;
	string input;
	cin>>input;
	int counter=0;
	for(int i=0; i<n-1; i++)
		{
		    if(input[i]==input[i+1])
			counter++;
		}
	cout<<counter<<endl;



	return 0;

}
