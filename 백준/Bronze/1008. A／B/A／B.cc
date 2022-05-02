#include <iostream>

using namespace std;
	
int main(int argc, char const *argv[])
{
	double a, b;

	cin >> a >> b;

	std::cout.precision(10);

	std::cout << std::fixed;

	std::cout<<a/b;

	return 0;
}