#include <bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i = a; i < b; i++)

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;

	if((a + b > c || a + c > b || b + c > a) && ((a + b + c) == 180) && a > 0 && b > 0 && c > 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}