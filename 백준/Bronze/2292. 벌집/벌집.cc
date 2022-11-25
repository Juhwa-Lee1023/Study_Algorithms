#include <iostream>

using namespace std;

int check(int num) {
    int sum = 1;
    int i = 1;
    while(num > sum){
        sum += (6 * i);
        i++;
    }
    return i;
}

int main(void) {
	int num = 0;
	cin >> num;

	if (num == 1) {
		cout << 1;
		return 0;
	} else if (num < 8) {
		cout << 2;
		return 0;
	} else if (num < 20) {
		cout << 3;
		return 0;
	}

	cout << check(num);
	return 0;
}