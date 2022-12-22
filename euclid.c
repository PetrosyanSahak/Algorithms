#include<stdio.h>

int gcd(int, int);

int main() {
	int a = 0;
	int b = 0;
	
	printf("%s", "Enter 2 number` a and b, to get the gcd(a,b): \n");
        scanf("%d%d", &a, &b);
	printf("%d", gcd(a,b));
	
	return 0;
}

int gcd(int a, int b) {
	int r = a % b;
		
	while(r != 0) {
		a = b;
		b = r;
		r = a % b;
	}
  
	return b;
}
