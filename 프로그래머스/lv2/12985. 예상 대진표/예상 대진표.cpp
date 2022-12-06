#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    while(true) {
        answer++;
        a = int((a + 1) / 2);
        b = int((b + 1) / 2);
        if(a == b) {
            break;
        }
    }
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}