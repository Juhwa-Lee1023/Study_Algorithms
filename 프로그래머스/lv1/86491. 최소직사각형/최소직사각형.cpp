#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int xSize = 0;
    int ySize = 0;
    for(int i = 0; i < sizes.size(); i++) {
        if(sizes[i][0] < sizes[i][1]) {
            swap(sizes[i][0], sizes[i][1]);
        }
        xSize = max(xSize, sizes[i][0]);
        ySize = max(ySize, sizes[i][1]);
    }
    
    return xSize * ySize;
}