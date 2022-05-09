#include <iostream>

using namespace std;
	
int main(int argc, char const *argv[])
{
	int a = 0;
	int x = 0;
	int y = 0;
	int z = 0;
	int j = 7;

    
	for (int i = 0; i < 8; ++i)
	{
	    cin >> a;
		if (a > i)
		{
		    y++;
		}
		if (a > j)
		{
		    z++;
		    j--;
		}
	}

	if (y > 7)
	{
	    cout << "ascending";
	}
	else if (z > 7)
	{
	    cout << "descending";
	}
	else
	{
	    cout << "mixed";
	}
	return 0;
}
