#include <iostream>


using namespace std;

int main()
{
	int x = 0;
	int arr[42] = {0, };



	for (int i = 0; i < 10; ++i)
	{
		cin >> x;
		arr[x % 42]++;
	}

    x = 0;
    
    for(int i = 0; i < 42; ++i)
    {
        if(arr[i] > 0)
        {
           x++; 
        }
    }
	
    cout << x;
    
	return 0;
}