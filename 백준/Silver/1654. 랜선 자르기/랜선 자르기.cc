#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio;
	cin.tie(NULL);

	unsigned int k = 0, n = 0, maxNum = 0, check = 0;
	unsigned int arr[10000];

	cin >> k >> n;

	for(int i = 0; i < k; i++) {
		cin >> arr[i];
		maxNum = max(maxNum, arr[i]);
	}
	
	unsigned int left = 1, right = maxNum, mid = 0, now = 0;
	
	while (left <= right) {
	    now = 0;
		mid = (left + right) / 2;
        
		for (int i = 0; i < k; i++) {
			now += arr[i] / mid;
		}

		if (now >= n) {
			left = mid + 1;
			check = max(check, mid);
		}
		else {
			right = mid - 1;
		}
	}
	
	cout << check;
}