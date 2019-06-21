#include<iostream>
#include<string>
using namespace std;
int main(void)
{

	string str;cin>>str;
	string instructions;cin>>instructions;
	int position=1;
	char *pointer=&(str[0]);
	int n=instructions.size();
	for(int i=0; i<n; i++)
	{
		if(instructions[i]==*pointer)
		{
			position++;
			pointer++;
		}
	}

	cout<<position<<endl;

	return 0;

}
