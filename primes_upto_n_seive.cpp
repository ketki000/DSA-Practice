#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

bool isPrime(int n)
{
    if (n == 2 || n == 3)
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return false;
    }
    if (n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}
void prime_upto_num_naive(int n)
{
    cout << "Inside naive approach " << n << endl;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << " " << i;
        }
    }
    cout << endl;
}

void prime_upto_num_seive(int n)
{
    // using seive of eratosthenes
    cout << "Inside optimal approach " << n << endl;
    
    bool arr[n + 1];
    memset(arr, true, sizeof(arr));
    arr[0] = false;
    arr[1] = false;
    
    for (int i = 2; i * i <= sizeof(arr); i++)
    {
        if (arr[i]==true && isPrime(i))
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (j % i == 0)
                {
                    arr[j] = false;
                }
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == true)
        {
            cout<<" " << i ;
        }
    }
    cout<<endl;
}

vector<int> prime_upto_num_seive_method2(int n){
     // using seive of eratosthenes
    cout << "Inside optimal approach m2 " << n << endl;
     vector<int> arr(n+1);
        for(int i = 0 ; i<=n;i++){
            arr[i] = i;
        }
        arr[1] = 0;
        for(int i = 2;i*i<=n;i++){
            if(isPrime(i)){
                for(int j = i*2;j<=n;j=i+i){
                    if(arr[j]%i==0){
                        arr[j] = 0;
                    }
                }
            }
        }
        vector<int> primes;
        for(int i=0;i<=n;i++){
            if(arr[i]!=0){
                primes.push_back(i);
            }
        }
        return primes;
}

int main()
{
    int n;
    cout << "Enter a number n : " << endl;
    cin >> n;
    prime_upto_num_naive(n); // O(n*sqrt(n))
    prime_upto_num_seive(n); // O(n*log(log(n))) - both are optimal - used array
    vector<int> primes = prime_upto_num_seive_method2(n);// O(n*log(log(n))) - both are optimal
    for(int i=0;i<primes.size();i++){
        cout<<" "<<primes[i];
    }
}