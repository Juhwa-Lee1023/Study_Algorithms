#include <iostream>
#include <vector>

using namespace std;

vector<float> arr;

int main()
{
	int x, y;
	int max = 0;
	float sum = 0;

	cin >> x;
	for (int i = 0; i < x; ++i)
	{
		cin >> y;
		arr.push_back(y);
		if (max < y)
		{
			max = y;
		}
	}

	for (int i = 0; i < x; ++i)
	{
		arr[i] = arr[i] / max * 100;
		sum = sum + arr[i];
	}
	
	cout << sum / x;
	

	return 0;
}