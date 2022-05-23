#include <iostream>

using namespace std;


int main()
{	
    cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int x;

	cin >> x;

	int a = x;
	int count = 0;

	while(1)
	{
		a = a % 10 * 10 + (a / 10 + a % 10) % 10;
		count++;
		if (x == a)
		{
			break;
		}
	}

	cout << count;
	



	return 0;
}