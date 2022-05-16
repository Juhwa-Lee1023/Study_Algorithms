#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
	int x, y;

	cin >> x >> y;


	if (y < 45) 
	{
		if (x == 0)
		{
			cout << 23 << " " << y + 15 << endl;
		}
		else
		{
			cout << x - 1 << " " << y + 15 << endl;
		}
	}
	else 
	{
		cout << x << " " << y - 45 << endl;
	}
}