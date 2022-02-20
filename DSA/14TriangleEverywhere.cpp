#include <bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i = a; i < b; i++)

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;

	bool isTriangle = ((a + b) > c && (b + c) > a && (a + c) > b);

	if(((a == b) && (b == c) && (a == c)) && isTriangle)
		cout << "1" << endl;
	else if(((a == b) || (b == c) || (a == c)) && isTriangle)
		cout << "2" << endl;
	else if(((a != b) || (b != c) || (a != c)) && isTriangle)
		cout << "3" << endl;
	else
		cout << "-1" << endl;

	return 0;
}