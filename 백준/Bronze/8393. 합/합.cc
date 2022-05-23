#include <iostream>

using namespace std;


int main()
{	
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int x;
	int sum = 0;


	cin >> x;

	for (int i = 1; i <= x; ++i)
	{
		sum = sum + i;
	}
	
	
	cout << sum;
	
	

	return 0;
}