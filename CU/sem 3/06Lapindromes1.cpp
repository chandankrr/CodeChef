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
		string s;
		cin >> s;

		int len = s.length();
		int newLen;

		if(len % 2 == 0)
			newLen = len / 2;
		else
			newLen = (len + 1) / 2;

		for(int i = 0; i < newLen; i++)
		{
			for(int j = newLen; j < len; j++)
			{
				if(s[i] == s[j])
				{
					s[j] = '0';
					break;
				}
				
			}
		}

		bool isLapindrome = true;

		for(int i = newLen; i < len; i++)
		{
			if(s[i] != '0')
				isLapindrome = false;
		}

		cout << (isLapindrome ? "YES" : "NO") << endl;
	}
}