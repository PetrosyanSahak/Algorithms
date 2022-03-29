#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int p {113};
    int g {0};
    int e {0};

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
            cout << g << " is generator for prime " << p << endl;
    }
    
    return 0;
}
