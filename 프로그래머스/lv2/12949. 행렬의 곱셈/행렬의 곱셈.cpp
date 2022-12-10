#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    int arr1Size = arr1[0].size();
    int arr2Size = arr2[0].size();
    for(int i = 0; i < arr1.size(); i++) {
        vector<int> temp;
        for(int j = 0; j < arr2Size; j++) {
            int num = 0;
            for(int k = 0; k < arr1Size; k++) {
                num += arr1[i][k] * arr2[k][j];
            }
            temp.push_back(num); 
        }
        answer.push_back(temp);
    }
    return answer;
}