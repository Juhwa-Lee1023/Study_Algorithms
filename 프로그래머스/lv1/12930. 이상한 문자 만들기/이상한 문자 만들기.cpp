#include <string>
#include <vector>
#include <iostream>

using namespace std;

string to_change(string s) {
    for(int i = 0; i < s.size(); i++) {
        if(i % 2 == 0) {
            if(s[i] < 'A' || s[i] > 'Z') {
                s[i] -= 32;
            }
        } else {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += 32;
            }
        }
    }
    return s;
}

string solution(string s) {
    string answer = "";
    string str = "";
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {
            str = to_change(str);
            answer += str;
            answer += " ";
            str = "";
        } else {
            str += s[i];
        }
    }
    
    str = to_change(str);
    answer += str;
    
    return answer;
}