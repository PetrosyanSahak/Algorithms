#include<iostream>
#include<cmath>

int main()
{

    int prime {0};
    int generator_count {0};
    
    std::cout << "Enter the prime p: " << std::endl;
    std::cin >> prime;
    std::cout << "\nHere are the generators for prime: " << prime << std::endl;
    std::cout << "--------------------------------------\n" << std::endl;

    for(int generator {2}; generator < (prime-1); ++generator)
    {
        int exponent;
	    
	for(exponent = 2; exponent < (prime - 1); ++exponent)
            if( (int)pow(generator,exponent) % prime == 1)
                break;
        
	if(exponent == (prime - 1))
            std::cout << ++generator_count << ": -> " << generator << std::endl;
    }
    std::cout << "\nFound " << generator_count << " generators" << std::endl;
	
    return 0;
}
