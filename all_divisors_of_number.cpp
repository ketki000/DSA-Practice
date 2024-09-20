#include <iostream>
#include <cmath>
using namespace std;

all_divisors_of_num_naive(int n){  // O(n)
for(int i = 1;i<=n;i++){
    if(n%i==0){
        cout<<i<<" ";
    }
}
cout<<endl;
}

void all_divisors_of_num_optimal(int n){  //O(sqrt(n))
for(int i=1;i*i<=n;i++){
if(n%i==0){
    // cout<<" "<<i<<" "<<(n/i)<<" "; in pairs
    cout<<i<<" "; // in ascending order
}
}
for(int i = sqrt(n) ; i >= 1;i-- ){ // print backward so n/i divisors come in ascending fashion
    if(n%i==0){
        cout<<(n/i)<<" "; // in ascending order
    }
}
}
int main(){
    int n;
    cout << "Enter a number n : " << endl;
    cin >> n;
    all_divisors_of_num_naive(n);
    all_divisors_of_num_optimal(n);
    return 0;
} 