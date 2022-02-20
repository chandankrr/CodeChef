#include <bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i = a; i < b; i++)

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	ll sum = 0;

	for(int i = 1; i <= n; i++){
		sum += i;
	}

	cout << sum << endl;

	return 0;
}