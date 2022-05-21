#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;


int main()
{	
	int x, y, z;
	
	cin >> x >> y >> z;

	if(x == y && x == z)
	{
		cout << 10000 + x * 1000;
	}
	else if(x == y && x != z )
	{
		cout << 1000 + x * 100;
	}
	else if(x == z && x != y )
	{
		cout << 1000 + x * 100;
	}
	else if(z == y && x != z )
	{
		cout << 1000 + z * 100;
	}
	else
	{
		int a = max(x, y);
		a = max(a, z);
		cout << a * 100;
	}

	
	

	return 0;
}