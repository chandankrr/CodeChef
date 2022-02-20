#include <bits/stdc++.h>
#define cinArr(n) for(ll x = 0; x < n; x++) cin >> arr[x]
#define MOD 1000000007
typedef long long int ll;

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
    int t;
    cin >> t;
    while(t--) {
        int n;
		cin >> n;

		string s, newS;
		cin >> s;

		for(int i = 0; i < n; i++)
		{
			if(s[i] != '.')
				newS.push_back(s[i]);
			
		}

		bool ans = true;

		if(newS.length() % 2 != 0) 
			ans = false;
		else{
			for(int i = 0; i < newS.length(); i++)
			{
				if(i % 2 == 0)
				{
					if( newS[i] == 'T')
						ans = false;
				}
				else{
					if(newS[i] == 'H')
						ans = false;
				}
			}
		}

		cout << (ans ? "Valid" : "Invalid") << endl;
    }

}