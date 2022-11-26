#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    int i = x;
    int y = 0;
    while(true) {
        y += x % 10;
        x = x / 10;
        if(x == 0) {
            break;
        }
    }
    return (i % y) == 0 ? true : false;
}