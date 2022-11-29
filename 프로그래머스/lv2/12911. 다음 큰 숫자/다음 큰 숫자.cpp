#include <string>
#include <vector>

using namespace std;

string to_binary(int num) {
    string str = "";
    while(num != 0) {
        str = (num % 2 == 0 ? "0" : "1") + str; 
        num /= 2;
    }
    return str;
}

int solution(int n) {
    int answer = 0;
    string str = to_binary(n);
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '1') {
            answer++;
        }
    }
    
    while(true) {
        n++;
        string str = to_binary(n);
        int num = 0;
        for(int i = 0; i < str.size(); i++) {
            if(str[i] == '1') {
                num++;
            }
        }
        if(num == answer) {
            return n;
        }
    }
}