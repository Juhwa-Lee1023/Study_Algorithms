#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    bool check = false;

    for(int i = 0; i < babbling.size(); i++) {
    	check = false;
        for(int j=0; j < babbling[i].size();) {
            if(babbling[i].substr(j, 3)=="aya") { j += 3; }
            else if(babbling[i].substr(j, 2)=="ye") { j += 2; }
            else if(babbling[i].substr(j, 3)=="woo") { j += 3; }
            else if(babbling[i].substr(j, 2)=="ma") { j += 2; }
            else {
                check = true;
                break;
            }
        }
        if(!check) { answer++; }
    }
    return answer;
}