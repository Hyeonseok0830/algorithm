#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int sum = a * b * c;
	int count[10] = { 0 };
	string s = to_string(sum);
	for (int i = 0; i < s.length(); i++)
	{
		string res=s.substr(i, 1);
		for (int j = 0; j < 10; j++)
			if (stoi(res) == j)
				count[j]++;
	}
	for (int i = 0; i < 10; i++)
		cout << count[i] << endl;
	
	
}