#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc = 1;
    cin >> tc;

    while(tc--){
        int d, n;
        cin >> d >> n;

        bool isMultiple_5 = false;

        while(d > 0){
            int lastDigit = d % 10;

            d /= 10;
            if(lastDigit == 0 || lastDigit == 5)
                isMultiple_5 = true;
                break;

        }

        if(isMultiple_5)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}