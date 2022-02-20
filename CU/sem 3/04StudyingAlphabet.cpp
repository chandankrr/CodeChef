#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s, s1;
	cin >> s;

	int n;
	cin >> n;

	while(n--)
	{
		int count = 0;
		cin >> s1;

		for(int i = 0; i < s1.length(); i++)
		{
			for(int j = 0; j < s.length(); j++)
			{
				if(s1[i] == s[j])
				{
					count++;
				}
			}
		}

		cout << (count == s1.length() ? "Yes" : "No") << endl;

	}
	
}