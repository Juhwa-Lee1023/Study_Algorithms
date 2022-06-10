#include <iostream>

using namespace std;

int main()
{
	int x, y;

	cin >> x;

	for (int i = 0; i < 9; ++i)
	{
		cin >> y;
		x = x - y;
	}

	cout << x;

	return 0;
}
