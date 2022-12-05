#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    string str = "";
    string answer = "";
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            str += s[i];
            continue;
        }
        answer += s[i];
        for(int j = 0; j < 10; j++) {
            if(answer == arr[j]) {
                str += to_string(j);
                answer.clear();
                break;
            }
        }
    }
    return stoi(str);
}