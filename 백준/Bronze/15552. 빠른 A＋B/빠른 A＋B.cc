#include <iostream>

using namespace std;


int main()
{	
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int count;

	cin >> count;

	int x, y;

	for (int i = 0; i < count; ++i)
	{
		cin >> x >> y;

		cout << x + y << "\n";
	}

	return 0;
}