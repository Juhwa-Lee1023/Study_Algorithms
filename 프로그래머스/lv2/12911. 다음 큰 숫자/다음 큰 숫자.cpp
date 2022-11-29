#include <string>
#include <vector>

using namespace std;

int binaryCount(int num) {
    string str = "";
    int n = 0;
    while(num != 0) {
        str = (num % 2 == 0 ? "0" : "1") + str; 
        num /= 2;
    }
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '1') {
            n++;
        }
    }
    return n;
}

int solution(int n) {
    int answer = binaryCount(n);
    
    while(true) {
        n++;
        if(answer == binaryCount(n)) {
            return n;
        }
    }
}