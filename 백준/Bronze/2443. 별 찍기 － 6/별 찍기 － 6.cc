#include <iostream>

using namespace std;
	

int main()
{
	int x, y;

	cin >> x;

	for (int i = 0; i < x; ++i)
	{
	    y = 2 * (x - i - 1) + 1;
	    
		for (int j = 0; j < i; ++j)
		{
			cout << " ";
		}
		for (int j = 0; j < y; ++j)
		{
			cout << "*";
		}
		cout << "\n";
	}



}
