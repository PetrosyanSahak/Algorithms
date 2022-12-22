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
	int r {a % b};
		
	while(r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}
	return b;
}
