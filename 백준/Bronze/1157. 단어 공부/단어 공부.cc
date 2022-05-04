#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int a[26] = {0, };
    int b = 0;
    int c = 0;
    int y = 0;
	string x = "sadfsadf";
	cin >> x;


	for(int i = 0; i < x.length(); i++)
	{
		if(x[i]<97)
			a[x[i] - 65]++; 
		else
			a[x[i] - 97]++; 
	}

	for(int i = 0; i < 26; i++) 
	{ 
		if(a[i] > b) 
		{ 
			b = a[i]; 
			c = i; 
		} 
	}

	for(int i = 0; i < 26; i++) 
	{ 
		if(b == a[i])
			y++; 
	}  


	if(y >= 2)
		cout << "?" << endl; 
	else
		cout << (char)(c + 65) << endl;

	return 0;
}