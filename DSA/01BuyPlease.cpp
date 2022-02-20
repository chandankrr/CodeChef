#include <bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i = a; i < b; i++)

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, x, y;
	cin >> a >> b >> x >> y;

	int ans = (a * x) + (b * y);

	cout << ans << endl;

	return 0;
}