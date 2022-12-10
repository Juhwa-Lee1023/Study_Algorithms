#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    int character[4] = {0, };
    string choice[8] = {"RT", "TR", "CF", "FC", "JM", "MJ", "AN", "NA"};
    
    for(int i = 0; i < survey.size(); i++) {
        int temp = 0;
        for(int j = 0; j < 8; j++) {
            if(choice[j] == survey[i]) {
                temp = j;
            }
        }
        if(choices[i] == 4) {
            continue;
        } else if(choices[i] < 4) {
            switch(temp) {
                case 0:
                    character[0] += 4 - choices[i];
                    break;
                case 1:
                    character[0] -= 4 - choices[i];
                    break;
                case 2:
                    character[1] += 4 - choices[i];
                    break;
                case 3:
                    character[1] -= 4 - choices[i];
                    break;
                case 4:
                    character[2] += 4 - choices[i];
                    break;
                case 5:
                    character[2] -= 4 - choices[i];
                    break;
                case 6:
                    character[3] += 4 - choices[i];
                    break;
                case 7:
                    character[3] -= 4 - choices[i];
                    break;
                default:
                    break;
            }
        } else {
            switch(temp) {
                case 0:
                    character[0] -= choices[i] - 4;
                    break;
                case 1:
                    character[0] += choices[i] - 4;
                    break;
                case 2:
                    character[1] -= choices[i] - 4;
                    break;
                case 3:
                    character[1] += choices[i] - 4;
                    break;
                case 4:
                    character[2] -= choices[i] - 4;
                    break;
                case 5:
                    character[2] += choices[i] - 4;
                    break;
                case 6:
                    character[3] -= choices[i] - 4;
                    break;
                case 7:
                    character[3] += choices[i] - 4;
                    break;
                default:
                    break;
            }
        }
    }
    if(character[0] >= 0) {
        answer += "R"; 
    } else {
        answer += "T"; 
    }
    if(character[1] >= 0) {
        answer += "C"; 
    } else {
        answer += "F"; 
    }
    if(character[2] >= 0) {
        answer += "J"; 
    } else {
        answer += "M"; 
    }
    if(character[3] >= 0) {
        answer += "A"; 
    } else {
        answer += "N"; 
    }
    return answer;
}