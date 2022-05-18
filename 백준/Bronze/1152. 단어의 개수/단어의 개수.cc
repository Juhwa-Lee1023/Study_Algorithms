#include <iostream>
#include <string>

using namespace std;


int main()
{
	int a = 1;
	string x;
	getline(cin, x);


	
	for (int i = 0; i < x.length(); ++i)
	{
		if (x[i] == ' ')
		{
			a++;
		}
	}

	if (x[0] == ' ')
	{
		a--;
	}
	
	if (x[x.length() - 1 ] == ' ')
	{
		a--;
	}

	cout << a;
	

	return 0;
}