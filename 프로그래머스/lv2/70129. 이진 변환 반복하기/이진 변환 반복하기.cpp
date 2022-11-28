#include <string>
#include <vector>
#include <iostream>

using namespace std;

string to_binary(int num) {
	string s = "";
	while (num > 0) {
		if (num % 2 == 1) s = "1" + s;
		else s = "0" + s;
		num >>= 1;
	}
	return s;
}

vector<int> solution(string s) {
    vector<int> answer;
    int countCal = 0, countZero = 0;
    bool check = true;
    
    while(s != "1") {
        if(check) {
            for(int i = 0; i < s.size(); i++) {
                if(s[i] == '0') {
                    s.erase(s.begin() + i);
                    i--;
                    countZero++;
                }
            }
            check = false;
            countCal++;
        } else {
            int num = s.size();
            s = to_binary(num);
            // cout << s << endl;
            check = true;
        }
    }
    
    answer.push_back(countCal);
    answer.push_back(countZero);
    return answer;
}