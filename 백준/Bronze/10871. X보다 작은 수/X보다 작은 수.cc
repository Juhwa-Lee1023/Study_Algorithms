#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
	int x, y, a;

	cin >> x >> y;

	for (int i = 0; i < x; ++i)
	{
		cin >> a;
		if (a < y)
		{
			cout << a << " ";
		}
	}

}