#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    int num = 0;
    for(int i = phone_number.size(); i >= 0; i--) {
        if(num > 4) {
            phone_number[i] = '*';
        }
        num++;
    }
    return phone_number;
}