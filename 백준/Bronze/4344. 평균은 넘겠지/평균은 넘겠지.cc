#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cout<<fixed;
    cout.precision(3);

	int x, y, z;
	int cnt = 0;
	double sum = 0;
	double aver = 0;

	cin >> x;

	for (int i = 0; i < x; ++i)
	{
		cin >> y;
		sum = 0;
		cnt = 0;
		for (int j = 0; j < y; ++j)
		{
			cin >> z;
			arr.push_back(z);
			sum += arr.at(j);
		}
		aver = sum / (double)y;
		for (int j = 0; j < y; ++j)
		{
			if (aver < arr.at(j))
			{
				cnt++;
			}
		}
		cout << cnt/(double)y*100 << "%" << "\n";
		arr.clear();
	}
	

	return 0;
}