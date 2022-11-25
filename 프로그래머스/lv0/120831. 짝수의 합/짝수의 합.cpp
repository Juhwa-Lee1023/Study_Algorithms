#include <string>

using namespace std;

int solution(int n) {
    int count = 0;
    for(int i = 1; i <= n; i++) {
        if (int(i % 2) == 0) { count += i; }
    }
    return count;
}