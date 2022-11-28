#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

string intToTernary(int num) {
    string str = "";
    int remain = 0;
    while(num >= 3) {
        remain = num % 3;
        num = num / 3;
        str += to_string(remain);
    }
    str += to_string(num);
    return str;
}

int solution(int n) {
    int answer = 0;
    
    string str = intToTernary(n);
    
    int size = str.size() - 1;
    
    for(int i = 0; i < str.size(); i++) {
        int num = str[i] - '0';
        answer += num * pow(3, str.size() - i - 1);
    }
    return answer;
}