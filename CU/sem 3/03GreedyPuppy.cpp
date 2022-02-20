#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	while(t--)
	{
		int n, k, res; // n -> coin || k -> people
		cin >> n >> k;

		res = 0;

		for(int i = 1; i <= k; i++)
		{
			if (n % i > res)
			{
				res = n % i;
			}
		}
		cout << res << endl;
	}
}