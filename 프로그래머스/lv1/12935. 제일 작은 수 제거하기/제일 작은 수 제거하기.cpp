#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int num = 2e9, minIndex = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(num > arr[i]) {
            num = arr[i];
            minIndex = i;
        }
    }
    
    arr.erase(arr.begin() + minIndex);
    
    if(!arr.empty()) {
        return arr;
    }
    arr.push_back(-1);
    return arr;
}