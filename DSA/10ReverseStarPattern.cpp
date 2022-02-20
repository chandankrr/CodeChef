#include <bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i = a; i < b; i++)

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i + j <= n)
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}

	return 0;
}