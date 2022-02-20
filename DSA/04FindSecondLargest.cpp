#include <bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i = a; i < b; i++)

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;

	if(a >= b && a >= c){
		if(b >= c)
			cout << b << endl;
		else
			cout << c << endl;
	}
	else if(b >= a && b >= c){
		if(a >= c)
			cout << a << endl;
		else
			cout << c << endl;
	}
	else if(a >= b)
		cout << a << endl;
	else
		cout << b << endl;


	return 0;
}