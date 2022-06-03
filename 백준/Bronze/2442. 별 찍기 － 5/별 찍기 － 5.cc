#include <iostream>

using namespace std;

int main()
{
    int x;
    
    cin >> x;
    
    
    for(int i = 1; i < x + 1; i++)
    {
        for(int j = 0; j < x - i; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < (i * 2 - 1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
