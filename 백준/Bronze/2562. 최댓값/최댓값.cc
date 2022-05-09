#include <iostream>

using namespace std;
	
int main(int argc, char const *argv[])
{
	int a[9] = {0, };
	int x = 0;
	int max = 0;
	int max_index = 0;


	for (int i = 0; i < 9; ++i)
	{
		cin >> x;
		if (x > max)
		{
			max = x;
			max_index = i + 1;
		}
	}

	cout << max << "\n" << max_index << endl;
	
	return 0;
}
