#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {
            
        } else if(s[i] >= 'a' && s[i] <= 'z') {
            int j = int(s[i]) + n;
            if(j > int('z')) {
                j = j - int('z');
                s[i] = 'a' + j - 1;
            } else {
                s[i] += n;
            }
        } else {
            s[i] += n;
            if(s[i] > 'Z') {
                int j = s[i] - 'Z';
                s[i] = 'A' + j - 1;
            }
        }
    }
    return s;
}