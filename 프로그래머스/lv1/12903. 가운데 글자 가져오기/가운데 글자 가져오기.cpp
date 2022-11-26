#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    if(s.size() % 2 == 0) {
        string str = "";
        str += s[int(s.size() / 2) - 1];
        str += s[int(s.size() / 2)];
        return str;
    }
    string str = "";
    str += s[int(s.size() / 2)];
    return str;
}