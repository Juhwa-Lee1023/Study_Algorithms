#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

class Mineral {
public:
    int diamond;
    int iron;
    int stone;

    Mineral(int diamond, int iron, int stone) 
        : diamond(diamond), iron(iron), stone(stone) {}
};

int solution(vector<int> picks, vector<string> minerals) {
    int answer = 0;
    vector<Mineral> list;
    int totalPicks = accumulate(picks.begin(), picks.end(), 0);

    // 광물을 5개 단위로 그룹화하고 피로도 계산
    for (int i = 0; i < minerals.size(); i += 5) {
        if (totalPicks == 0) break;

        int dia = 0, iron = 0, stone = 0;
        for (int j = i; j < i + 5 && j < minerals.size(); j++) {
            string mineral = minerals[j];
            if (mineral == "diamond") {
                dia += 1;
                iron += 5;
                stone += 25;
            } else if (mineral == "iron") {
                dia += 1;
                iron += 1;
                stone += 5;
            } else { // stone
                dia += 1;
                iron += 1;
                stone += 1;
            }
        }

        list.push_back(Mineral(dia, iron, stone));
        totalPicks--;
    }

    // stone 곡괭이 기준으로 정렬
    sort(list.begin(), list.end(), [](const Mineral& a, const Mineral& b) {
        return a.stone > b.stone;
    });

    // 최소 피로도로 광물 채굴
    for (const auto& m : list) {
        if (picks[0] > 0) {
            answer += m.diamond;
            picks[0]--;
            continue;
        }
        if (picks[1] > 0) {
            answer += m.iron;
            picks[1]--;
            continue;
        }
        if (picks[2] > 0) {
            answer += m.stone;
            picks[2]--;
            continue;
        }
    }

    return answer;
}
