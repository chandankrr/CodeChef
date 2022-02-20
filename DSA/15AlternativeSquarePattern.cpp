#include <bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i = a; i < b; i++)

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int num1 = 1;
	int num2 = 10;

	for(int i = 1; i <= n; i++){
		if(i % 2 != 0){
			for(int j = 1; j <= 5; j++){
				cout << num1 << " ";
				num1++;
			}
			num1 += 5;
		}
		else{
			for(int k = 1; k <= 5; k++){
				cout << num2 << " ";
				num2--;
			}
			num2 += 15;
		}
		cout << endl;
	}

	return 0;
}