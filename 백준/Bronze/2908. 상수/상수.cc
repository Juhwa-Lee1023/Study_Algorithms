#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
	int x, y;
	int x1, x2, x3;
	int y1, y2, y3;

	cin >> x >> y;

	x1 = x / 100;
	x2 = x % 100 / 10;
	x3 = x % 100 % 10;

	x = x3 * 100 + x2 * 10 + x1;

	y1 = y / 100;
	y2 = y % 100 / 10;
	y3 = y % 100 % 10;

	y = y3 * 100 + y2 * 10 + y1;

	if (x > y)
	{
		cout << x;
	}
	else
	{
		cout << y;
	}

}