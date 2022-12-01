#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    
    for(int i = 1; i < words.size(); i++) {
        if(words[i - 1][words[i-1].size() - 1] != words[i][0]) {
            answer.push_back(i % n + 1);
            answer.push_back(i / n + 1);
            return answer;
        }
        for(int j = i - 1; j >= 0; j--) {
            if(words[i].compare(words[j]) == 0) {
                answer.push_back(i % n + 1);
                answer.push_back(i / n + 1);
                return answer;
            }
        }
    }

    answer.push_back(0);
    answer.push_back(0);
    return answer;
}