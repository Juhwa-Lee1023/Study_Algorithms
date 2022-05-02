#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
	
int arr[8001];
int num[500001];

int main()
{
	int x;
	int sum = 0;
	int average, median;
	int count, range;
	int max = 0;
    int pointer;
	cin >> x;

	for (int i = 0; i < x; i++)
	{
		cin >> num[i];
		sum += num[i];
		arr[num[i]+4000]++;
	}

	sort(num, num + x);
    
	
	

	for (int i = 0; i < 8001; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			pointer = i;
		}
	}
	

	for (int i = pointer + 1; i < 8001; i++)
	{
		if (arr[i] == max)
		{
			pointer = i;
			break;
		}
	}
    average = round(double(sum)/x);
    median = num[(x-1)/2];
	count = pointer - 4000;
    range = num[x-1] - num[0];

	cout<<average<<"\n";
	cout<<median<<"\n";
	cout<<count<<"\n";
	cout<<range<<"\n";


}
