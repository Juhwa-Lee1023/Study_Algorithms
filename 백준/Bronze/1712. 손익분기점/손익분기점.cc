#include <iostream>

using namespace std;


int main()
{	
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int x, y, z;
	int a, b, c;

	cin >> x >> y >> z;

	a = z - y;

	if (a <= 0)
	{
		cout << -1;
	}
	else
	{
		b = x / a;
		c = x % a;
		cout << b + 1;
	}
	



	return 0;
}