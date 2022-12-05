#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int num;

bool compare(const string& i, const string& j) {
    if (i[num] == j[num])
        return i < j;
    return i[num] < j[num];
}

vector<string> solution(vector<string> strings, int n) {
    num = n;
    sort(strings.begin(), strings.end(), compare);
    return strings;
}