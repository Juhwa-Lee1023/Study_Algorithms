#include <iostream>

using namespace std;
	

int main(int argc, char const *argv[])
{
	int a = 0;
	int x = 0, y = 0;

	cin >> a;

	for(int i = 0; i < a; i++)
	{
		cin >> x >> y;
		cout << x + y << "\n";
	}
	
	return 0;
}
