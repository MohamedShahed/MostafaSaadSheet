#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int arr[4], counter=0;
	for(int i=0; i<4; i++)cin>>arr[i];
	string str;cin>>str;
	int n=str.size();
	for(int i=0; i<n; i++)
	{
		if(str[i]=='1')counter+=arr[0];
		else if(str[i]=='2')counter+=arr[1];
		else if(str[i]=='3')counter+=arr[2];
		else counter+=arr[3];
	}

	cout<<counter<<endl;

	return 0;

}
