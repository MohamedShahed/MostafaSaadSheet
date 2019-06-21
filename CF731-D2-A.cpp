#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(void)
{
	string str;cin>>str;
	int counter=0, n=str.size();
	char pointer='a';
	for(int i=0; i<n; i++)
	{
		counter+=(min(abs(pointer-str[i]), 26-(abs(pointer-str[i]))));
		pointer=str[i];
	}
	cout<<counter<<endl;

	return 0;

}
