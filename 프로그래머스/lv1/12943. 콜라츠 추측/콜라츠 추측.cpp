#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    unsigned long long i = num;
    if(i == 1) { answer; }
    while(true) {
        if(i == 1) { break; }
        if(i % 2 == 0) {
            i /= 2;
        } else {
            i = i * 3 + 1;
        }
        answer++;
        if(answer == 500) { return -1; }
    }
    return answer;
}