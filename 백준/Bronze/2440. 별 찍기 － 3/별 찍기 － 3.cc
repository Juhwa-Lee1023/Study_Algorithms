#include <iostream>


using namespace std;

int main()
{
	int x;

	cin >> x;

	for (int i = 0; i < x; ++i)
	{
		for (int k = x; k > i; --k)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}