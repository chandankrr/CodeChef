#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
const int MAX_N = 1e5 + 10;
const ll MOD = 1e9 + 7;

void solve() {
	int n;
	cin >> n;

	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];

	int ans{0};
	for(int i = 0; i < n; i++){
		int v = 1 + i + ans;
		if(v == arr[i])
			ans++;
	}
	cout << ans << endl;
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