#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i,k,n) for (int i = k; i < n; ++i)
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;

void solve() {
	string s;
	cin >> s;

	int len, newLen;
	string first="", last="";

	len = s.length();

	if(len % 2 == 0){
		newLen = len / 2;
		rep(i,0,newLen){
			first += s[i];
			last += s[newLen + i];
		}

		sort(first.begin(), first.end());
		sort(last.begin(), last.end());

		if(first == last)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	else{
		newLen = (len - 1)/2;
		rep(i,0,newLen){
			first += s[i];
			last += s[newLen + i + 1];
		}

		sort(first.begin(), first.end());
		sort(last.begin(), last.end());

		if(first == last)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
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