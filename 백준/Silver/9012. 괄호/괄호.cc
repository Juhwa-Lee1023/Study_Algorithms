#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool checkStr(string check) {
	stack<char> chars;
    
	for(int i = 0; i < check.length(); i++) {
		if(chars.empty() || check[i] == '(') {
			chars.push(check[i]);
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

int main(void) {
	int num = 0;
	cin >> num;

	for(int i = 0; i < num; i++) {
		string check;
		cin >> check;

		if(checkStr(check)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}