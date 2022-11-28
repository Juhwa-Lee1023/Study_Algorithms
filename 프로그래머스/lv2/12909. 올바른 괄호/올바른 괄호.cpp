#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    stack<char> chars;
    
	for(int i = 0; i < s.length(); i++) {
		if(chars.empty() || s[i] == '(') {
			chars.push(s[i]);
		} else if(chars.top() == '(') {
			chars.pop();
		}
	}

	if(chars.empty()) {
		return true;
	} else {
		return false;
	}
}