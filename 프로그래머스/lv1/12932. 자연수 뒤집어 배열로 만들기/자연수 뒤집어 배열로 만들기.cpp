#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string str = to_string(n);
    for(int i = str.size(); i > 0; i--) {
        answer.push_back(int(str[i - 1] - '0'));
    }
    return answer;
}