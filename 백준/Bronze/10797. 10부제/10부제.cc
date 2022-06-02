#include <iostream>

using namespace std;

int main()
{
    int x, check;
    int sum = 0;
    
    cin >> x;
    for(int i = 0; i < 5; i++)
    {
        cin >> check;
        if(x == check)
        {
            sum++;
        }
    }
    cout << sum;

    return 0;
}
