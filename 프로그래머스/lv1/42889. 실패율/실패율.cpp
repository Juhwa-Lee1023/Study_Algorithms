#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, double> a, pair<int, double> b) {
    if(a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int, double>> stagesSuccess;
    
    sort(stages.begin(), stages.end());
    
    for(int i = 1; i <= N; i++) {
        double index = count(stages.begin(), stages.end(), i);
        double temp = count_if(stages.begin(), stages.end(), [i](int elem) { 
            return elem >= i; 
        });
        
        if(temp == 0) {
            stagesSuccess.push_back({i, 0});
        } else {
            stagesSuccess.push_back({i, index / temp});
        }
    }
    
    sort(stagesSuccess.begin(), stagesSuccess.end(), compare);
    
    for(int i = 0; i < stagesSuccess.size(); i++) {
        answer.push_back(stagesSuccess[i].first);
    }
    return answer;
}