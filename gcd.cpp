#include <iostream>
using namespace std;
int gcd(int n1, int n2);
int recusiveGcd(int n1, int n2);
int euclideanGCD(int a,int b);

int main(){

    int a,b;
    cout<<"Enter 2 numbers for GCF : "<<endl;
    cin>>a;
    cin>>b;
    //int result = gcd(min(a,b),max(a,b)); - will consume more time not preferred - O(min(a,b))- time complexity
    //int result = recusiveGcd(min(a,b),max(a,b)); // recursive approach 
    int result = euclideanGCD(a,b); // most optimal approach - O(log(min(a,b))) -time complexity

    
    cout<<"GCD of "<<a << " and "<<b<<" is :"<<result;  
    return 0;
}

// Iterative approach 
// assuming n2 > n1 
int gcd(int n1, int n2){
    int gcd = 1;
    for(int i=1;i<=n1;i++){
        if(n1%i==0){
            if(n2%i==0){
                gcd = i;
            }
        }
    }
    return gcd;
}

// recusive approach
// assuming n2 > n1 
int recusiveGcd(int n1, int n2){
    if(n2%n1==0){
        return n1;
    }
    else{
        n1--;
        return recusiveGcd(n1,n2);
    }
}

 int euclideanGCD(int a, int b) {
        while(a>0 && b>0){
            if(a>b){
                a = a%b;
            }
            else{
                b = b%a;
            }
        }
        if(a==0){
            return b;
        }
        else{
            return a;
        }
    }