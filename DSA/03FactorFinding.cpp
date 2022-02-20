#include <bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i = a; i < b; i++)

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, count = 0;
	cin >> n;

	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			count++;
		}
	}
	cout << count << endl;

	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			cout << i << " ";
		}
	}


	return 0;
}