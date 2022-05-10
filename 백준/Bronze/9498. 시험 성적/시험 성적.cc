#include <iostream>


using namespace std;

int main()
{
	int x;
	
	cin >> x;

	if (90 <= x)
	{
		cout << "A";
	}
	else if(80 <= x)
	{
		cout << "B";
	}
	else if(70 <= x)
	{
		cout << "C";
	}
	else if(60 <= x)
	{
		cout << "D";
	}
	else
	{
		cout << "F";
	}

	return 0;

}
