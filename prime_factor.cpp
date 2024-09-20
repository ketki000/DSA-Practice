#include <iostream>
using namespace std;
void prime_factors(int n)
{
    int temp = n;
    // for (int i = 2; i < n; i++){ ----------------------O(n)
    for (int i = 2; i * i <= n; i++) // ---------------O(sqrt(n))
    {
        while (temp % i == 0)
        {
            cout << i << " , ";
            temp = temp / i;
        }
    }
    if (temp > 2)
		cout<<temp<<" ";
}
void prime_factors_optimial(int n)
{
    int temp = n;
    if (temp == 1)
    {
        return;
    }
    while (temp % 2 == 0)
    {
        cout << '2' << " , ";
        temp = temp / 2;
    }
    while (temp % 3 == 0)
    {
        cout << '3' << " , ";
        temp = temp / 3;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        while (temp % i == 0)
        {
            temp = temp / i;
            cout << i << " , ";
        }
        while (temp % (i + 2) == 0)
        {
            temp = temp / (i + 2);
            cout << (i + 2) << " , ";
        }
    }
    //for prime number greater than sqrt(n) - 346 -> 2 * 173 , 173>sqrt(346)
      if (temp > 2)
		cout<<temp<<" ";
}

int main()
{

    int n;
    cout << "Enter a number n : " << endl;
    cin >> n;
    // prime_factors(n);
    prime_factors_optimial(n);
    return 0;
}
