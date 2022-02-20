#include <bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i = a; i < b; i++)

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	if(n % 5 == 0 || n % 6 == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}