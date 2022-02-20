#include <bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i = a; i < b; i++)

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int arr[n];
	rep(i, 0, n){
		cin >> arr[i];
	}

	for(int i = n - 1; i >= 0; i--){
		cout << arr[i] << " ";
	}


	return 0;
}