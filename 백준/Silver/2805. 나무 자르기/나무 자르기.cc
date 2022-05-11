#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;

int main()
{
	long long x, y;
	long long a;
	long long max = 0;
	int start = 0;
	long long end = 0;
	long long sum;
	long long check;

	cin >> x >> y;

	for (int i = 0; i < x; ++i)
	{
		cin >> a;
		arr.push_back(a);
		if (a >= max)
		{
			max = a;
		}
	}

	end = max;
	max = 0;

	while(start <= end)
	{
		sum = 0;
		check = (start + end) / 2;
		for(int i = 0 ; i < x ; i++)
		{
            if(arr[i] > check) 
            {
            	sum += arr[i] - check;
            }
        }

        if(sum >= y)
        {
            start = check + 1;
            if(check > max)
            {
            	max = check;
            } 
        }
        else
        {
        	end = check - 1;
        } 
	}
	
	cout << max;

	return 0;

}
