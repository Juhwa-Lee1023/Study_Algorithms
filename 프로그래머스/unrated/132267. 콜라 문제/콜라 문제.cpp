#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    while(a <= n) {
        int temp = int(n / a) * b;
        answer += temp;
        n = int(n / a) * b + n % a;
    }
    return answer;
}