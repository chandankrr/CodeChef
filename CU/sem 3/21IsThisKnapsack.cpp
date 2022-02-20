#include <bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i = a; i < b; i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--)
	{
		int n,c,k;
		cin >> n >> c >> k;
		int a[n];
		rep(i,0,n){
			cin >> a[i];
		}

		int start = 0, end = 0, sum = 0, ans = 0;
		while(start < n && end < n)
		{
			if(sum < k)
			{
				sum += a[end];
				end++;
			}
			else if(sum > c)
			{
				sum -= a[start];
				start++;
			}
			else
			{
				ans = max(ans, end-start);
				sum += a[end];
				end++;
			}
		}

		while(start < n)
		{
			if(sum >= k && sum <= c)
			{
				ans = max(ans,end-start);
				break;
			}
			sum -= a[start];
			start++;
		}
		cout << ans << endl;
	}
}



