#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i <= 2 * n - 1; i++)
	{
		for (int j = 0; j <= n - 1; j++)
		{
			if (i % 2 == 0)
			{
				if (j % 2 == 0)// i¦ j¦
					cout << "*";
				else		// i¦ jȦ	
					cout << " ";
			}
			else
			{
				if (j % 2 == 0)// iȦ j¦
					cout << " ";
				else           // iȦ jȦ
					cout << "*";
			}
		}
		cout << endl;
	}
}
