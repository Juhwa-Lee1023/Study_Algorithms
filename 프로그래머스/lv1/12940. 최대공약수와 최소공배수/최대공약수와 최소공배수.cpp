#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int maxDivisor = n, divisor = m, r = 0;
    
    while(divisor != 0) {
        r = maxDivisor % divisor;
        maxDivisor = divisor;
        divisor = r;        
    }
    
    answer.push_back(maxDivisor);
    answer.push_back(n * m / maxDivisor);
    
    return answer;
}