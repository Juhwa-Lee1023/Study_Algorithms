using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long num = 0;
    for(int i = 1; i <= count; i++) {
        num += price * i;
    }
    
    answer = money - num;
    if(answer < 0) {
        return -answer;
    }
    return 0;
}