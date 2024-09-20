#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 7;

    cout << "Before swapping: " << a << " " << b << endl;

    b = a ^ b;
    a = b ^ a;
    b = a ^ b;
    
    cout << "After swapping: " << a << " " << b << endl;

    return 0;
}