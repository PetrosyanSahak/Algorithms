//In short, a number {k} between (1,prime) will be generator,
//if there is no number {d} in range(1,prime-1), that will satisfy this equation
//							k**d == 1 mod (prime)
#include<iostream>
#include<cmath>

int main()
{

    int prime {0};
    int exponent {0};
    int generator_count {0};
    
    std::cout << "Enter the prime p: " << std::endl;
    std::cin >> prime;
    std::cout << "\nHere are the generators for prime: " << prime << std::endl;
    std::cout << "--------------------------------------\n" << std::endl;

    //This loop iterates over numbers [2,prime-2], to test if they are generator for a given prime
    //Note that we do not test (prime-1) because Fermat's Law states that
    //		                                                          a**(prime-1) = 1 (mod prime)
    //                                                        for any natural number a
    for(int generator {2}; generator < (prime-1); ++generator)
    {
        
	for(exponent = 2; exponent < (prime - 1); ++exponent)
        {
            int intermediate_value = pow(generator,exponent);
            //
	    //if the residue is 1, means we have cycle, but because generator is less than (prime-1)
	    //this number cannot be generator, thus we break from this loop, and test the remaining values
            if(intermediate_value % prime == 1)
                break;
        }
        
	//if we did not break out from the previous loop, it means that we found a generator
        if(exponent == (prime - 1))
	{
		std::cout << ++generator_count << ": -> " << generator << std::endl;
	}
    }
    std::cout << "\nFound " << generator_count << " generators" << std::endl;
	
    return 0;
}
