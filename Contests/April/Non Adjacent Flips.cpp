#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc = 1;
    cin >> tc;

    while(tc--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ct = 0;
        for (int i = 0; i < s.length(); i++){
            if(s[i] == '0')
                ct++;
        }

        if(ct == n)
            cout << 0 << endl;
        else{
            bool valid = false;
            for (int i = 0; i < n - 1; i++){
                if(s[i] == '1' && s[i+1] == '1'){
                    valid = true;
                    break;
                }
            }

            if (valid == false){
                cout << 1 << endl;
            }
            else{
                cout << 2 << endl;
            }
        }
    }

    return 0;
}