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
		string x, y;
		cin >> x >> y;

		int c = 0;
		for(int i = 0; i < x.length();i++)
		{
			if(x[i] != y[i] && x[i] != '?' && y[i] != '?')
			{
				c = 1;
			}
		}

		cout << (c == 0 ? "Yes" : "No") << endl;
	}

}