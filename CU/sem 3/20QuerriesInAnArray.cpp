#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, q;
	cin >> n >> q;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	while(q--)
	{
		int l, r, x;
		cin >> l >> r >> x;
		int count = 0;

		for(int i = l-1; i < r; i++)
		{
			if(a[i] >= x)
			{
				break;
			}
			count++;
		}
		cout << (r-l+1) - count << endl;
	}
}