#include <iostream>

using namespace std;
	

int main(int argc, char const *argv[])
{
	int a = 0, sum = 0;
	char x;

	cin >> a;

	for(int i = 0; i < a; i++)
	{
		cin >> x;
		sum += x - 48;
	}
	
	cout << sum;

	return 0;
}
