#include <bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i = a; i < b; i++)

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	ll sumOdd = 0, sumEven = 0;
	
	for(int i = 1; i <= 2 * n; i++){
		if(i % 2 == 0){
			sumEven += i;
		}
		else{
			sumOdd += i;
		}
	}

	cout << sumOdd << endl;
	cout << sumEven << endl;


	return 0;
}