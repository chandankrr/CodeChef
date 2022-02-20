#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;

int main()
{
	cpp_int t;
	cin >> t;

	if (1 <= t <= 100)
	{
		while (t--)
		{
			cpp_int n, fact = 1;
			cin >> n;

			if (1 <= n <= 100)
			{
				for (cpp_int i = n; i > 1; i--)
				{
					fact = fact * i;
				}
			}

			cout << fact << endl;

		}
	}
	return 0;
}