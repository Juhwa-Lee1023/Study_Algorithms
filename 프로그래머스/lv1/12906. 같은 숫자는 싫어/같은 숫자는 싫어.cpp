#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    int num = 2e9;
    
    for(int i = 0; i < arr.size(); i++) {
        if (num != arr[i]) {
            answer.push_back(arr[i]);
        }
        num = arr[i];
    }

    return answer;
}