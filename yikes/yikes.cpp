#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x, n;
	double sum = 1;
	double add = 0;

	cout << "Input n: ";
	cin >> n;
	cout << "Input x: ";
	cin >> x;

	if (x <= 0)
	{
		for (int i = 0; i <= n - 1; i++)
		{
			sum = sum * (i * i * i) + i;
			cout << sum << endl;
		}
	}
	else
	{
		for (int i = 0; i <= n - 1; i++)
		{
			for (int j = 0; j <= n - 1; j++)
			{
				add = add + (x / i + j);
			}
		}
		cout << add;
	}
	return 0;
}