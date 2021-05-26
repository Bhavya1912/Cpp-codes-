#include <iostream.h>
using namespace std;

int main()
{
    int a, b, flag;
    cin>> a>>b;

    flag = a;
    a = b;
    b = flag;

    cout << "After swapping." << ;
    cout << "a = " << a << ", b = " << b ;

    return 0;
    
}