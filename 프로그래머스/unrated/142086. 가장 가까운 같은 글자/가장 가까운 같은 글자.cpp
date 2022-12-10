#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    for(int i = 0; i < s.size(); i++) {
        int temp = int(s[i]);
        int num = 1;
        bool check = false;
        for(int j = i - 1; j >= 0; j--) {
            if(temp == s[j]) {
                check = true;
                break;
            }
            num++;
        }
        if(check) {
            answer.push_back(num);
        } else {
            answer.push_back(-1);
        }
    }
    return answer;
}