
#include <iostream>

using namespace std;

int main()
{
    int n; 

    cout << "Input a number: ";
    cin >> n;


    int to = n * 2 - 1;
    int n2 = n;// because I will decrement value of n 
    int from = 0;

    int arr[to][to];

    for (int i = 0; i < n2; ++i)
    {
    	for (int j = from; j < to; ++j)
		{
			for (int k = from; k < to; ++k)
			{
				if (j == from || j == (to - 1) || k == from || k == (to - 1))
				{
					arr[j][k] = n;
					if (n == 1)// 1 can be the least value that can be reached
						break;
				}
				
			}
		}
		--to;
		--n;
		++from;
    }

    to = 2 * n2 - 1;
    for (int i = 0; i < to; ++i)
    {

    	for (int j = 0; j < to; ++j)
    		cout << arr[i][j] << " ";	

    	cout << endl;
    }
    
    return 0;
}
