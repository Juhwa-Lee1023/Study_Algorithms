#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    vector<long long> arr;
    arr.push_back(1);
    arr.push_back(1);
    
    for(int i = 0; i < n - 1; i++) {
        arr.push_back((arr[i] + arr[i + 1]) % 1234567);
    }
        
    return arr.back();
}