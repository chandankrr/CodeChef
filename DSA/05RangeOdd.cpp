#include <bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i = a; i < b; i++)

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int l , r;
	cin >> l >> r;

	for(int i = l; i <= r; i++){
		if(i % 2 != 0)
			cout << i << " ";
	}

	return 0;
}