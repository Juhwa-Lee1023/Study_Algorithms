#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(a > b) { swap(a,b); }
    for(a; a <= b; a++) {
        answer += a;
    }
    return answer;
}