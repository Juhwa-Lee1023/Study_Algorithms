#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int left = 1, right = 1, sum = 1, count = 0;

    while (left <= n) {
        if (sum < n) {
            right++;
            sum += right;
        } else if (sum > n) {
            sum -= left;
            left++;
        } else {
            count++;
            sum -= left;
            left++;
        }
    }

    cout << count;
    return 0;
}