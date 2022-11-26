#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    long long num = 0;
    for(int i = 0; i < absolutes.size(); i++) {
        num += signs[i] ? absolutes[i] : -absolutes[i];
    }
    
    return num;
}