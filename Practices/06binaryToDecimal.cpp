// Problem:
// enter a binary string and convert that binary string in decimal.

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		string str;
		cin >> str;

		long long result = 0, power2 = 1;
		for (int i = str.size() - 1; i >= 0; i--)
		{
			int binaryDigit = str[i] - '0';
			result = result + (binaryDigit * power2);
			power2 = power2 * 2;

		}
		cout << result << endl;

	}


	return 0;
}


// input:
// 3
// 4
// 0001
// 2
// 10
// 4
// 1010
