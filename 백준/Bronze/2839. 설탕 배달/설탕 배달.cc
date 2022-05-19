#include <iostream>


using namespace std;

int main()
{
	int x = 0, y = 0;

	cin >> x;

	while (x >= 0) 
	{
		if (x % 5 == 0) 
		{	
			y += (x / 5);	
			cout << y << endl;
			return 0;
		}
		x -= 3;	
		y++;	
	}
	cout << -1 << endl;
}