#include <iostream>

using namespace std;

#define max 1000001

int arr[max]{ 0, };

int main(void) {
	ios::sync_with_stdio;
	cin.tie(NULL);

	int m = 0, n = 0;
	cin >> m >> n;

	for (int i = 2; i <= n; i++) { arr[i] = i; }

    for (int i = 2; i * i <= n; i++) {
        if (arr[i] == 0) { continue; }
        for (int j = i * i; j <= n; j += i) { arr[j] = 0; }
    }

    for (int i = m; i <= n; i++) {
        if (arr[i] != 0) { cout << arr[i] << '\n'; }
    }
    
    return 0;

}