#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cin >> x;
    cin >> y;
    cin >> z;
    
    int a = y + z;
    
    x = x + a / 60;
    y = a % 60;
    
    if (x > 23)
    {
        x = x % 24;
    }
    
    cout << x << " " << y;

    return 0;
}
