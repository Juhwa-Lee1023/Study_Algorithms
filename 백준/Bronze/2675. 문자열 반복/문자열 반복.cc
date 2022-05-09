#include <iostream>

using namespace std;
	
int main(int argc, char const *argv[])
{
	int x = 0;
	int a = 0;
	string s;

    cin >> x;
    
	for (int i = 0; i < x; ++i)
	{
		cin >> a >> s;
		for (int j = 0; j < s.length(); ++j)
		{
		    for (int k = 0; k < a; ++k)
		    {
		        cout << s[j];
		    }
		}
		cout << "\n";
	}

	
	return 0;
}
