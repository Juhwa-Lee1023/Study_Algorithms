#include <iostream>


using namespace std;

int main()
{
	int x, y, w, h;

	cin >> x >> y >> w >> h;

	if (x < y && x < (w - x) && x < (h - y))
	{
		cout << x;
	}
	else if(y < (w - x) && y < (h - y))
	{
		cout << y;
	}
	else if((w - x) < (h - y))
	{
		cout << w - x;
	}
	else
	{
		cout << h - y;
	}
	

	return 0;
}