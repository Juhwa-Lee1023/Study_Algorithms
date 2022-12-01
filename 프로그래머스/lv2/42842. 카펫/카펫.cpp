#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int mix = brown + yellow;
    for (int i = 3; i < brown; i++) {
        if (!(mix % i)) {
            int j = mix / i;
            if (((i - 2) * (j - 2)) == yellow) {
                answer.push_back(j);
                answer.push_back(i);
                break;
            }
        }
    } 
    return answer;
}