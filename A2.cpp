#include <iostream>

using namespace std;

int main( )
{
    double a[4] = {0, 1, 2, 3};
    for (double* cp = &a[0]; cp <= &a[3]; cp += 2)
    {
        cout << (void*) cp << " : " << (*cp) << endl;
    }

    return 0;
}



