#include<iostream>

using namespace std;

int gcd(int, int);

int main()
{
	int a {0};
	int b {0};
	cin >> a >> b;
	cout << gcd(a,b);


	return 0;
}

int gcd(int a, int b)
{
	if (a != b)
	{
		int tmp1 {0};
		int r {0};
		if (a < b)
		{
			tmp1 = a;
			a = b;
			b = tmp1;
		}
		r = a % b;
		
		while(r != 0)
		{
			a = b;
			b = r;
			r = a % b;
		}
	}
	return b;
}
