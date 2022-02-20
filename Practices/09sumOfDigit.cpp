#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int a;
	    cin >> a;
	    int sum = 0;
	    int last_digit;
	    while(a != 0)
	    {
	        last_digit = a % 10;
	        sum += last_digit;
	        a = a / 10;
	    }
	    
	    cout << sum;
	    
	}
	return 0;
}
