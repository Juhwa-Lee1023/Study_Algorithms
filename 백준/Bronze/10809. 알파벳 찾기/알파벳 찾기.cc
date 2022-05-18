#include <iostream>
#include <string>

using namespace std;


int main()
{
	int arr[26];
	string x;
	cin >> x;
	for (int i = 0; i < 26; ++i)
	{
		arr[i] = -1;
	}
	for (int i = 0; i < x.length(); ++i)
	{
		switch(x[i])
		{
			case 'a':
			{
				if(arr[0] == -1)
					arr[0] = i;
				break;
			}
			
			case 'b':
			{
				if(arr[1] == -1)
					arr[1] = i;
				break;
			}

			case 'c':
			{
				if(arr[2] == -1)
					arr[2] = i;
				break;
			}

			case 'd':
			{
				if(arr[3] == -1)
					arr[3] = i;
				break;
			}

			case 'e':
			{
				if(arr[4] == -1)
					arr[4] = i;
				break;
			}

			case 'f':
			{
				if(arr[5] == -1)
					arr[5] = i;
				break;
			}

			case 'g':
			{
				if(arr[6] == -1)
					arr[6] = i;
				break;
			}

			case 'h':
			{
				if(arr[7] == -1)
					arr[7] = i;
				break;
			}

			case 'i':
			{
				if(arr[8] == -1)
					arr[8] = i;
				break;
			}

			case 'j':
			{
				if(arr[9] == -1)
					arr[9] = i;
				break;
			}

			case 'k':
			{
				if(arr[10] == -1)
					arr[10] = i;
				break;
			}

			case 'l':
			{
				if(arr[11] == -1)
					arr[11] = i;
				break;
			}

			case 'm':
			{
				if(arr[12] == -1)
					arr[12] = i;
				break;
			}

			case 'n':
			{
				if(arr[13] == -1)
					arr[13] = i;
				break;
			}

			case 'o':
			{
				if(arr[14] == -1)
					arr[14] = i;
				break;
			}

			case 'p':
			{
				if(arr[15] == -1)
					arr[15] = i;
				break;
			}

			case 'q':
			{
				if(arr[16] == -1)
					arr[16] = i;
				break;
			}

			case 'r':
			{
				if(arr[17] == -1)
					arr[17] = i;
				break;
			}

			case 's':
			{
				if(arr[18] == -1)
					arr[18] = i;
				break;
			}

			case 't':
			{
				if(arr[19] == -1)
					arr[19] = i;
				break;
			}

			case 'u':
			{
				if(arr[20] == -1)
					arr[20] = i;
				break;
			}

			case 'v':
			{
				if(arr[21] == -1)
					arr[21] = i;
				break;
			}

			case 'w':
			{
				if(arr[22] == -1)
					arr[22] = i;
				break;
			}

			case 'x':
			{
				if(arr[23] == -1)
					arr[23] = i;
				break;
			}

			case 'y':
			{
				if(arr[24] == -1)
					arr[24] = i;
				break;
			}

			case 'z':
			{
				if(arr[25] == -1)
					arr[25] = i;
				break;
			}

		}

		
		
	}
	for (int i = 0; i < 26; ++i)
	{
		cout << arr[i] << " ";
	}



	return 0;
}