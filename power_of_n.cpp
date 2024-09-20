#include <iostream>
#include <cmath>
using namespace std;

long power_of_n_naive(long x, long n)
{
    long res = 1;
    for (long i = 0; i < n; i++)
    {
        res *= x;
    }
    return res;
}

long power_of_n_optimal(long x, long n)
{
    if (n == 1)
    {
        return x;
    }
    else if (n % 2 == 0)
    {
        return power_of_n_optimal(x, n / 2) * power_of_n_optimal(x, n / 2);
    }
    else
    {
        return x * power_of_n_optimal(x, n - 1);
    }
}
int main()
{
    long x, n;
    cout << "Enter x number and its power: " << endl;
    cin >> x >> n;
    long res = power_of_n_naive(x,n);
    long res1 = power_of_n_optimal(x, n)%long(pow(10,9)+7);
    cout << "(naive)Power of " << n << " is : " << res;
    cout << "(optimal)Power of " << n << " is : " << res1;
    return 0;
}