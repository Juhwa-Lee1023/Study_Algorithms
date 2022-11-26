#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % divisor != 0) {
            arr.erase(arr.begin() + i);
            i--;
        }
    }
    sort(arr.begin(), arr.end());
    if(!arr.empty()) {
        return arr;
    } else {
        arr.push_back(-1);
        return arr;
    }
}