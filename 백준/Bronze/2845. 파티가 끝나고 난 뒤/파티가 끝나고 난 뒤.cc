#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int arr[5];
    cin >> x >> y;
    
    x = x * y;
    
    for (int i = 0; i < 5; i++) 
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < 5; i++) 
    {
        cout << arr[i] - x << " ";
    }
    
    return 0;
}
