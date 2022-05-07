#include <iostream>
#include <string>

using namespace std;
	
int arr[10];

int main(int argc, char const *argv[])
{
	int a, b, c;
	int x;

	cin >> a >> b >> c;

	x = a * b * c;

	for(int i = x; i > 0; i /= 10)
		arr[i%10]++;
	
	for(int i=0;i<10;i++)
		cout << arr[i] << "\n";

	return 0;
}
