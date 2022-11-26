#include <string>
#include <vector>
#include<cmath>

using namespace std;

long long solution(long long n) {
    if(sqrt(n) - int(sqrt(n)) == 0) {
        return (sqrt(n) + 1) * (sqrt(n) + 1);
    }
    
    return -1;
}