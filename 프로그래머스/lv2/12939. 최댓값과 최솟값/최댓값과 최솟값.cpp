#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    using ll = long long;
    ll minNum = 8e9, maxNum = -8e9;
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] != ' ') {
            answer += s[i];
        } else {
            ll num = stoll(answer);
            minNum = min(minNum, num);
            maxNum = max(maxNum, num);
            answer = "";
        }
    }
    ll num = stoll(answer);
    minNum = min(minNum, num);
    maxNum = max(maxNum, num);

    answer = to_string(minNum) + " " + to_string(maxNum);
    return answer;
}