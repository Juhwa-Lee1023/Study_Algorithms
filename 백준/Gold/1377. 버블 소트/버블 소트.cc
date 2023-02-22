#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i;
    }
    
    sort(arr.begin(), arr.end());
    
    vector<int> answer(n);
    for (int i = 0; i < n; i++) {
        answer[i] = arr[i].second - i;
    }
    
    int max_ans = *max_element(answer.begin(), answer.end());
    cout << max_ans + 1 << '\n';
    
    return 0;
}
