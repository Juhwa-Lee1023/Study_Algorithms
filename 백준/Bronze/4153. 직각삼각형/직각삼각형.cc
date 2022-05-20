#include <iostream>
#include <cmath>

using namespace std;

int main()
{	
	int x, y, z;
	int xy, xz, yz;

	while(1)
	{
		cin >> x >> y >> z;
		if(x == 0)
		{
			break;
		}
		x = pow(x, 2);
		y = pow(y, 2);
		z = pow(z, 2);

		xy = x + y;
		xz = x + z;
		yz = y + z;

		if(xy == z)
		{
			cout << "right" << "\n";
		}
		else if(xz == y)
		{
			cout << "right" << "\n";
		}
		else if(yz == x)
		{
			cout << "right" << "\n";
		}else
		{
			cout << "wrong" << "\n";
		}
	}
	

	return 0;
}