#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int a;

	cin >> a;
    double x, y, z;
	

	for (int i = 0; i < a; i++) 
	{
        
		cin >> x >> y;

		double j = 1;
		for (;; j++) 
		{
			if (y - x < j * j)
				break;
		}

		if (y - x == (j - 1) * (j - 1)) 
		{
			z = 2 * (j - 1) - 1;
		} 
		else if (y - x < ((j - 1) * (j - 1) + j * j) / 2) 
		{
			z = 2 * (j - 1);
		}
		else 
		{
			z = 2 * j - 1;
		}
		cout << z << "\n";
	}

	return 0;
}