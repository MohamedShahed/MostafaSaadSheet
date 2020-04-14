#include<iostream>
#include<map>
#include<cstring>
const int N=1000;

using namespace std;

int main(void)
{
    map<char , char>m;

    char arr[N];
    cin.getline(arr, N,'}');
    for(int i=0; i<strlen(arr); i++)
    {
        if(!m.count(arr[i]) && arr[i]!=',' && arr[i]!='{' && arr[i]!=' ')
            m.insert(pair<char , char>(arr[i], arr[i]));

    }

    cout<<m.size()<<endl;
    return 0;
}
