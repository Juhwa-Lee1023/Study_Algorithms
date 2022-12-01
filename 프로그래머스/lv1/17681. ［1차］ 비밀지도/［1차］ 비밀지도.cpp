#include <string>
#include <vector>
#include <bitset>

using namespace std;

string to_binary(int num) {
    string str = "";
    while(num != 0) {
        str = (num % 2 == 0 ? "0" : "1" ) + str;
        num /= 2;
    }
    return str;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    string str1 = "";
    string str2 = "";
    string index = "";
    
    for(int i = 0; i < n; i++) {
        str1 = to_binary(arr1[i]);
        str2 = to_binary(arr2[i]);
        index = "";
        
        if(str1.size() < n) {
            int k = n - str1.size();
            string imsi = "";
            for(int l = 0; l < k; l++) {
                imsi += " ";
            }
            str1 = imsi + str1;
        }
        if(str2.size() < n) {
            int k = n - str2.size();
            string imsi = "";
            for(int l = 0; l < k; l++) {
                imsi += " ";
            }
            str2 = imsi + str2;
        }
        
        for(int j = 0; j < n; j++) {
            if(str1[j] == '1' || str2[j] == '1') {
                index += "#";
            } else {
                index += " ";
            }
        }
        answer.push_back(index);
    }
    
    return answer;
}