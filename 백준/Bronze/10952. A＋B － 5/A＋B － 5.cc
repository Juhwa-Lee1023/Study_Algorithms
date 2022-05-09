#include <iostream>

using namespace std;
	

int main(int argc, char const *argv[])
{
	int x = 0, y = 0;

	while(true)
	{
        cin >> x >> y;
        if (x == 0 && y == 0)
        {
        	break;
        }
		cout << x + y << "\n";
	}
	
	return 0;
}
