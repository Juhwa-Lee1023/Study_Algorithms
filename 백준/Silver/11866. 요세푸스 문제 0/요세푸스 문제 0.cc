#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;

int main(int argc, char const *argv[])
{
	int x, y;
	int pointer = 0;

	cin >> x >> y;

	for (int i = 1; i <= x; ++i)
	{
		arr.push_back(i);
	}
    cout << "<";
	for (int i = 0; i < x; ++i)
	{
		for (int j = 0; j < y; ++j)
		{
		    pointer = pointer + 1;
		    for (int k = 0; k < x; ++k)
	        {
			    if (arr[pointer] == 1001)
			    {
			    	pointer = pointer + 1;
		    	}
		    	if (pointer > x)
		    	{
		    		pointer = 1;
		    	}
	        }	
		}
		if (i < (x-1)){
		    cout << pointer << ", ";
		}
		else
		{
		    cout << pointer;
		}
		
		arr[pointer] = 1001;
	}
	cout << ">";
	return 0;
}