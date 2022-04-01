#include<iostream>

int gcd(int, int);

int main()
{
	int a {0};
	int b {0};
	
	std::cout << "Enter 2 number` a and b, to get the gcd(a,b): " << std::endl;
	std::cin >> a >> b;
	std::cout << gcd(a,b);
	
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
