#include <iostream>
using namespace std;

const int MOD = 1000000000;
const int SIZE = 2000001;
int fibo[SIZE];

void precomputeFibonacci() {
    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i < SIZE; i++) {
        fibo[i] = (fibo[i - 1] + fibo[i - 2]) % MOD;
    }
}

int main() {
    int n;
    cin >> n;
    
    precomputeFibonacci(); 

    if (n == 0) {
        cout << 0 << "\n" << 0 << "\n";
    } else if (n > 0) {
        cout << 1 << "\n" << fibo[n] << "\n";
    } else {  
        n = abs(n);
        if (n % 2 == 0) {
            cout << -1 << "\n";
        } else {
            cout << 1 << "\n";
        }
        cout << fibo[n] << "\n";
    }

    return 0;
}
