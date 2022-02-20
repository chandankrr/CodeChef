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

		int left[26] = {0};
		int right[26] = {0};

		int len = s.length();

		for(int i = 0; i < len/2; i++)
		{
			int index = s[i] - 'a';
			left[index]++;
		}

		for(int i = (len + 1) / 2; i < len; i++)
		{
			int index = s[i] - 'a';
			right[index]++;
		}

		bool isLapindrome = true;

		for(int i = 0; i < 26; i++)
		{
			if(left[i] != right[i])
				isLapindrome = false;
			
		}

		cout << (isLapindrome ? "YES" : "NO") << endl;

	}
}