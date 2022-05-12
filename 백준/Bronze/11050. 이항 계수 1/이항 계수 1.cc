#include <iostream>

using namespace std;

	
int factorial (int a)
{
	int n = 1;
	for (int i = a; i > 0; --i)
	{
		n = n * i; 
	}

	return n;
}

int main()
{
	int x, y;
	int a;
	
	cin >> x >> y;

	a = factorial(x) / (factorial(y) * factorial(x - y));

	cout << a;

	return 0;

}
