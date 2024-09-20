#include <iostream>
using namespace std;

bool isPrimeNaive(int n)  //O(n)
{
    if (n == 1)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
           {return false;}
    }
    return true;
}
bool isPrimeOptimal(int n)  //O(sqrt(n))

{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
bool isPrimeMoreOptimal(int n) //O(sqrt(n)) but 3 times faster
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
int main()
{

    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    bool prime = isPrimeNaive(n);
    bool prime2 = isPrimeOptimal(n);
    bool prime3 = isPrimeMoreOptimal(n);

    cout << n << " is prime : " << prime << " " << prime2 << " " << prime3 << endl;

    return 0;
}