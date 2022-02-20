#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
const int MAX_N = 1e5 + 10;
const ll MOD = 1e9 + 7;

void solve() {
	int x;
	cin >> x;

	int p = x, q = 0, r = x;
	for(int i = 0; i < 31; i++){
		if(not(r&1<<i)){
			r = r | (1 << i);
			break;
		}
	}
	cout << p << " " << q << " " << r << endl;
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