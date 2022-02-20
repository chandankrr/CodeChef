#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
const int MAX_N = 1e5 + 10;
const ll MOD = 1e9 + 7;

void solve() {
	int n, k;
	string s;
	cin >> n >> k >> s;

	int start = 0, end = s.length() - 1, mid = 0;
	while(start <= end){
		if(s[start] != s[end]){
			mid++;
		}

		start++;
		end--;
	}
	int ans = k - mid;
	if(ans >= 0 && ans % 2 == 0)
		cout << "YES" << endl;
	else if(ans >= 0 && n % 2 == 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}

int main(){
	std::ios_base::sync_with_stdio(false);

	int tc = 1;
	cin >> tc;

	while(tc--){
		// cout << "Case #" << t << ": ";
		solve();
	}

	return 0;
}