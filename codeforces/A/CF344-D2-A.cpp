#include<iostream>
using namespace std;
int main(void)
{
	int n, input, temp, counter=1;
	cin>>n;
	cin>>input;
	temp=input;
	n--;
	while(n>0)
	{
		cin>>input;
		if(input!=temp)
		{
			temp=input;
			counter++;
		}
		n--;
	}
	cout<<counter<<endl;
	return 0;

}
