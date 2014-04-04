#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream cin("1.txt",ios::in);
	int a;
	while(cin>>a)
		cout<<a<<endl;
	return 0;
}
