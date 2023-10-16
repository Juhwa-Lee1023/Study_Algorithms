#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer;
    int n = sequence.size();
    long long currentSum = 0;
    int startIndex = 0;   

    for (int endIndex = 0; endIndex < n; ++endIndex) {
        currentSum += sequence[endIndex];

        while (currentSum > k) {
            currentSum -= sequence[startIndex];
            startIndex++;
        }

        if (currentSum == k) {
            if (answer.empty() || (endIndex - startIndex) < (answer[1] - answer[0])) {
                answer = {startIndex, endIndex};
            }
        }
    }

    return answer;
}
