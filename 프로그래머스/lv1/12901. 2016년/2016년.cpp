#include <string>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    string arr[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int c = 4;
    for(int i = 0; i < a - 1; i++) {
        c += month[i];
    }
    c += b;
    c %= 7;
    switch (c) {
        case 0:
            return "SUN";
        case 1:
            return "MON";
        case 2:
            return "TUE";
        case 3:
            return "WED";
        case 4:
            return "THU";
        case 5:
            return "FRI";
        case 6:
            return "SAT";
        default:
            return "SUN";
    }
    
}