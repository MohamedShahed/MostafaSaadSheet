#include<iostream>
using namespace std;
int main(void)
{
	int price, r;
	cin>>price>>r;

	int counter=1;
	while(((price*counter)-r)%10!=0 && (price*counter)%10!=0)
	{
		counter++;
	}
	cout<<counter<<endl;
	return 0;

}
