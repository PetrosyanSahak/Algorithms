#include <iostream>

int main()
{
    int p {0};
    int g {0};
    int e {0};

    std::cout << "Enter the modulo p:" << std::endl;
    std::cin >> p;
    
    std::cout << "Enter the base g:" << std::endl;
    std::cin >> g;
    
    std::cout << "Enter the exponent e:" << std::endl;
    std::cin >> e;
    
    int e1 {e};
    int v {g % p};
    int t {1};
    
    while(e > 0)
    {
        if(e % 2 == 1)
            t = (t*v)%p;
    
        e /= 2;
        v = (v*v) % p;
    }
    
    std::cout << "(" << g << " ^ " << e1 << ") mod " << p << " = " << t << std::endl;
    
    return 0;
}
