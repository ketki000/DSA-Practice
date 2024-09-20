#include <iostream>
using namespace std;

// O(n)
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
// O(n)
int find_trailing_0s(int fact)
{
    int zeros = 0;
    while (fact % 10 == 0)
    {
        zeros++;
        fact = fact / 10;
    }
    return zeros;
}
int optimised_find_trailing_0s(int n)
{
    int res = 0;
    for(int i=5;n/i>0;i*=5){
        res += (n/i);
    }
    return res;
}

int main()
{

    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    long fact = calculate_factorial(n); // interger overflow on 20!..wrong values onwards
    int zeros = find_trailing_0s(fact); // Calculating n! then calculating zeros taking > 1sec & integer/datatype overflow -> O(n)
    cout << "The number of trailing 0s in " << n << "! is : " << zeros << endl;

    int zeros1 = optimised_find_trailing_0s(n); // O(log(n))
    cout << "(Optimised)The number of trailing 0s in " << n << "! is : " << zeros1 << endl;

    return 0;
}