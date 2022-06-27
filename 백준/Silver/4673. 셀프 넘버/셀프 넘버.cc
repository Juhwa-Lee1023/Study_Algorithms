#include <iostream>
 
using namespace std;
 
int d(int n) {
	int sum = n;
 
	while (n != 0) {
		sum = sum + (n % 10); 
		n = n / 10;	  
	}
	return sum;
}
 
 
int main(int argc, char const *argv[]) {
    
	bool arr[10001] = { false, };
	
	for (int i = 1; i < 10001; i++) {
		int n = d(i);
		if (n < 10001) { 
			arr[n] = true;
		}
	}
	
	for (int i = 1; i < 10001; i++) {
		if (!arr[i]) {
			cout << i << "\n";
		}
	}
 
	return 0;
}