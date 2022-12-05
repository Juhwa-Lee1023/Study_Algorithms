#include <string>
#include <stack>

using namespace std;

int solution(string s)
{
    stack<char> stack;
    for(int i = 0; i < s.size(); i++) {
        if(stack.empty()) {
            stack.push(s[i]);
        } else {
            if(stack.top() == s[i]) {
                stack.pop();
            } else {
                stack.push(s[i]);
            }
        }
    }
    if(stack.empty()) {
         return 1;
    }
    return 0;
}