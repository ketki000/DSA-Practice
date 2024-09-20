#include <iostream>
#include <cmath>
using namespace std;

long calculate_factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * calculate_factorial(n - 1);
    }
}

int digits_in_factorial(long fact)
{
    int digit = 0;
    while (fact > 0)
    {
        fact = fact / 10;
        digit++;
    }
    return digit;
}

int optimised_digits_in_factorial(int n)
{
    double log_n = 0;  //use double instead of float to pass all test cases
    for(int i=1;i<=n;i++){
        log_n += log10(i);
    }
    int digits = floor(log_n) + 1;
    return digits;
    
}

int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    long fact = calculate_factorial(n);
    int digits = digits_in_factorial(fact);
    int digits2 = optimised_digits_in_factorial(n); // without calculating factorial itself - compulation overhead

    cout << "Digits in factorial of " << n << " is : " << digits << endl;
    cout << "(Optimised)Digits in factorial of " << n << " is : " << digits2 << endl;
    return 0;
}