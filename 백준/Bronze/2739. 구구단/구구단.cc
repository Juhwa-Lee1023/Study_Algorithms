#include <iostream>

using namespace std;
	
int main(int argc, char const *argv[])
{
	int x = 0;
	
    cin >> x;
    
	for (int i = 1; i < 10; ++i)
	{
		cout << x << " " << "*" << " " << i << " " << "=" << " " << x * i;
		cout << "\n";
	}

	
	return 0;
}
