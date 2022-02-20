#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
const int MAX_N = 1e5 + 10;
const ll MOD = 1e9 + 7;

void solve() {
	int x, y;
	cin >> x >> y;

	if(x == y)
		cout << 2 * x -1 << endl;
	else if(y == 0)
		cout << x << endl;
	else
		cout << x + y << endl;
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