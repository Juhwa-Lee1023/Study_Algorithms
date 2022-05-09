#include <iostream>

using namespace std;
	
int main(int argc, char const *argv[])
{
	int a = 0;
	int x = 0;
	int max = -1000001;
	int min = 1000001;

	cin >> a;

	for (int i = 0; i < a; ++i)
	{
		cin >> x;
		if (x > max)
		{
			max = x;
		}
		if (x < min)
		{
			min = x;
		}
	}

	cout << min << " " << max << endl;
	
	return 0;
}
