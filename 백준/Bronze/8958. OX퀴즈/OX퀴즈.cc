#include <iostream>
#include <string>

using namespace std;
	
int main(int argc, char const *argv[])
{
	int a = 0;
	string x;
	int y = 0;
	int sum = 0;


    cin >> a;
	for (int i = 0; i < a; ++i)
	{
        y = 0;
        sum = 0;
	    cin >> x;
	    for (int j = 0; j < x.length(); ++j){
	        if (x[j] == 'O')
		    {
		        y++;
	    	}
		    else
		    {
		        y = 0;
		    }  
		    sum = sum + y;
	    }
		cout << sum << "\n";
	}
	
	return 0;
}
