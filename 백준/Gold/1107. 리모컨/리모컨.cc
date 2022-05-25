#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
	
vector<bool> chec(10,false);

bool check(int a)
{
	string x = to_string(a);
	for (int i = 0; i < x.length(); ++i)
	{
		if (chec[x[i] - 48])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int x, y, z;
	int minn;
	string a;

	cin >> x >> y;

	for (int i = 0; i < y; ++i)
	{
		cin >> z;
		chec[z] = true;
	}

	a = to_string(x);

	minn = abs(x - 100);
	
	for(int i = 0; i <= 1000000; i++){
        if(check(i)){
            z = abs(x - i) + to_string(i).length();
            minn = min(minn, z);
        }
    }
    cout << minn;
}
