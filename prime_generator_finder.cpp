#include<iostream>
#include<cmath>

int main()
{

    int p {0};
    int g {0};
    int e {0};
    int k {0};
    
    std::cout << "Enter the prime p: " << std::endl;
    std::cin >> p;
    std::cout << "\nHere are the generators for prime: " << p << std::endl;
    std::cout << "--------------------------------------\n" << std::endl;

    for(g = 2; g < (p-1); g++)
    {
        e = 2;
        
	for(e = 2; e < (p-1); e++)
        {
            int f = pow(g,e);

            if(f%p == 1)
                break;
        }
        
        if(e == (p-1))
	{
		std::cout << ++k << ": -> " << g << std::endl;
	}
    }
    std::cout << "\nFound " << k << " generators" << std::endl;
	
    return 0;
}
