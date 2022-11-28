#include <string>
#include <vector>

using namespace std;

int fibonacci(int num) {
   if(num == 1) {
        return 1;
   } else if(num == 2) {
        return 1;
   } else {
        return fibonacci(num - 1) + fibonacci(num - 2);
   }
}

int solution(int n) {
    int fibonacci[100001];
    fibonacci[0] = 0; fibonacci[1] = 1;
    
    for(int i = 2; i <= n; i++) {
        fibonacci[i] = (fibonacci[i - 1] + fibonacci[i - 2])  % 1234567;
    }
    return fibonacci[n];
}