#include <iostream>

using namespace std;


int main()
{	
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int x;

	cin >> x;

	int a, b;

	for (int i = 1; i <= x; ++i)
	{
		cin >> a >> b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << "\n";
	}


	return 0;
}