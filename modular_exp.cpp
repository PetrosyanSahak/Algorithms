#include <iostream>

using namespace std;

int main()
{
    int p {1113};
    int g {5633};
    int e {933};
    int v {g%p};
    int t {1};
    
    while(e > 0)
    {
        if(e % 2 == 1)
            t = (t*v)%p;
    
        e = (e/2);
        v = (v*v)%p;
    }
    
    cout << t << "is equal (563**93 mod 113)" <<endl;
    
    return 0;
}
