#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x;
	int cnt = 0;
	int num;
	string str;
	bool check = true;

	cin >> x;

	for (int i = 0; i < x; ++i)
	{
		cin >> str;
		check = true;
		num = str.length();

		for (int j = 0; j < num; ++j)
		{
			for (int k = 0; k < j; ++k)
			{
				if (str[j] != str[j-1] && str[j] == str[k])
				{
					check = false;
				}
			}
		}
		if (check)
		{
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}