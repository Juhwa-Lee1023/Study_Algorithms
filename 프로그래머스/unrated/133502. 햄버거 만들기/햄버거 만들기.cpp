#include <string>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> arr;
    int imsi[4] = {1, 3, 2, 1};
    for(int i = 0; i < ingredient.size(); i++) {
        arr.push_back(ingredient[i]);
        int temp[4] = {0, };
        int num = arr.size() - 1;
        for(int j = 0; j < 4; j++) {
            temp[j] = arr[num];
            num--;
        }
        bool check = true;
        for(int j = 0; j < 4; j++) {
            if(check && temp[j] == imsi[j]) {
                
            } else {
                check = false;
            }
        }
        if(check) {
            answer++;
            arr.pop_back();
            arr.pop_back();
            arr.pop_back();
            arr.pop_back();
        }
    }
    return answer;
}