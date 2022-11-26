#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    for(int i = 1; i <= 9; i++) {
        if((end(numbers) == find(begin(numbers), end(numbers), i))) { 
            answer += i; 
        }
    }
    return answer;
}