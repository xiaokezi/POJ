#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
	freopen("1.txt","r",stdin);
	//ifstream fin("1.txt");
	string s;
	int c = 0;
	while(getline(cin,s))
	{
		cout<<s<<endl;
	}
}
