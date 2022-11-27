#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string str = "";
    string answer = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] != ' ') {
            str += s[i];
        } else {
            if(!answer.empty()) {
                answer += " ";
            }
            if(!str.empty()) {
                for(int j = 0; j < str.size(); j++) {
                    if(str[j] < '0' || str[j] > '9') {
                        if(j == 0) {
                            if(str[j] >= 'a' && str[j] <= 'z') {
                                str[j] -= 32;
                            }
                        } else {
                            if(str[j] >= 'A' && str[j] <= 'Z') {
                                str[j] += 32;
                            }
                        }  
                    }
                }
            }
            answer += str;
            str.clear();
        }
    }
    if(!answer.empty()) {
        answer += " ";
    }
    if(!str.empty()) {
        for(int j = 0; j < str.size(); j++) {
            if(str[j] < '0' || str[j] > '9') {
                    if(j == 0) {
                        if(str[j] >= 'a' && str[j] <= 'z') {
                            str[j] -= 32;
                        }
                    } else {
                        if(str[j] >= 'A' && str[j] <= 'Z') {
                            str[j] += 32;
                        }
                    }
            }
        }
    }
    answer += str;
    return answer;
}