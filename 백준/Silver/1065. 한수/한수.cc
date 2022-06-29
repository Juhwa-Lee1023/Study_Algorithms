#include <iostream>

using namespace std;

bool check(int a){
    if(a < 100)
        return true;
    int a1, a2, a3;
    a3 = a / 100;
    a1 = a % 10;
    a2 = a % 100 / 10;
    if(a3 - a2 == a2 - a1)
        return true;
    return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int x;
	int cnt = 0;

	cin >> x;

	for (int i = 1; i <= x; ++i)
	{
		if(check(i))
            cnt++;
	}
	
	cout << cnt;

	return 0;
}