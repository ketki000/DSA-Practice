#include <iostream>
using namespace std;
int number_of_exact3diviors(int n)   //divisors dont need to be prime -> 4 -> 1,2,4 - 3 divisors
{
    int res = 0;
    for (int i = 2; i*i <= n; i++) 
    {
        int count = 1; // as every number is divisible by 1

        for (int j = 2; j<= i; j++)
        {
           if(i % j == 0)
            {
                count++;
            }
        }
        if(count==3){
            res++;
        }
    }
    return res;
}
bool isPrime(int n){
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int number_of_exact3diviors_optimal(int n){
    int count=0;
    for(int i = 2;i*i<=n;i++){ // as we are comparing perfect square of i with n, no need to go beyond sqrt n
        if(isPrime(i)){   //i less than sqrt n so square is less than n ofc
            
                count++; // 1 n are the 2 divisors, and the 3rd one needs to be prime number whose square <= n, since if it's composite number it will have 2 factors, then no. of divisors will become 4
            
        }
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter a number n : " << endl;
    cin >> n;
    int count = number_of_exact3diviors(n); //O(n*n)
    int count2 = number_of_exact3diviors_optimal(n); //O(sqrtN^2)
    cout<<"Number of numbers less than "<<n<<" having exact 3 divisors are : "<<count<<"  "<<count2<<endl;
    cout<<count;
    return 0;
}