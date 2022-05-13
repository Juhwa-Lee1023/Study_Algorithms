#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

vector<int> y;
vector<char> z;

int main()
{	
    int a = 0, x = 0;
    int cnt = 0;
    int arr[100001] = {0, };
    
	cin >> a;
	
	for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

	for (int i = 1; i <= a; i++)
	{
		y.push_back(i);
		z.push_back('+');

		while (!y.empty() && y.back() == arr[cnt])
		{
			y.pop_back();
			z.push_back('-');
			cnt++;
		}
	}

	if (!y.empty())
    {
        cout << "NO";
    }
	else
    {
        for (int i = 0; i < z.size(); i++)
        {
            cout << z[i] << '\n';
        }
    }
	

}