#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> citations) {
    vector<int> answer;
    answer.push_back(0);
    sort(citations.begin(), citations.end());
    for(int i = 0; i < citations[citations.size() - 1]; i++) {
        int temp = 0;
        for(int j = 0; j < citations.size(); j++) {
            if(i <= citations[j]) {
                temp++;
            }
        }
        if(i <= temp) {
            answer.push_back(i);
        }
    }
    return answer[answer.size() - 1];
}