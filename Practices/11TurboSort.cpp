#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i,k,n) for (int i = k; i < n; ++i)
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;

void solve() {
  	int t;
  	cin >> t;

  	int arr[t];
  	rep(i,0,t)
  		cin >> arr[i];

  	sort(arr, arr + t);

  	rep(i,0,t){
  		cout << arr[i] << endl;
  	}

}


int main(){
	std::ios_base::sync_with_stdio(false);

	int tc = 1;
	// cin >> tc;

	while(tc--){
		// cout << "Case #" << t << ": ";
		solve();
	}

	return 0;
}