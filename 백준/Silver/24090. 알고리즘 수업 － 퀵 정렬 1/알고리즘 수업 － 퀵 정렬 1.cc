#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int k;

void swap(vector<int>& A, int a, int b) {
    if (k == 0) {
        return;
    }
    k--;
    swap(A[a], A[b]);
    if (k == 0) {
        cout << A[a] << " " << A[b] << endl;
        return;
    }
}

int partition(vector<int>& A, int p, int r) {
    int x = A[r];
    int i = p - 1;
    if (k != 0) {
        for (int j = p; j < r; j++) {
            if (A[j] <= x) {
                i++;
                if (k != 0) {
                    swap(A, i, j);
                } else {
                    break;
                }
            }
        }
        if (i + 1 != r) {
            swap(A, i+1, r);
        }
    }
    return i+1;
}

void quick_sort(vector<int>& A, int p, int r) {
    if (p < r && k != 0) {
        int q = partition(A, p, r);
        if (k == 0) {
            return;
        }
        quick_sort(A, p, q-1);
        if (k == 0) {
            return;
        }
        quick_sort(A, q+1, r);
    }
}

int main() {
    int n;
    cin >> n >> k;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    quick_sort(A, 0, n-1);
    if (k != 0) {
        cout << -1 << endl;
    }
    return 0;
}
