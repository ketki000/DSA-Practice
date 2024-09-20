#include <iostream>
using namespace std;


// bruteforce O(a*b - max(a,b)) complexity
int lcm(int a,int b){
for(int i=max(a,b); i< a*b ; i+=1){
if(i%a==0 && i%b==0){
    return i;
}
}
}

// efficient O(log(min(a,b))) complexity
int lcm_by_hcf(int a, int b){
    int lcm,gcd;
    int original_a = a;
    int original_b = b;
while(a>0 && b>0){
    if(a>b){
        a = a%b;
    }
    else{
        b = b%a;
    }
}
 if(a==0){
        gcd = b;
    }
    else{
        gcd = a;
    }
    lcm = original_a * original_b / gcd;
    return lcm;
}

int main(){
    int a,b;
    cout<<"Enter 2 numbers for lcm : "<<endl;
    cin>>a>>b;

    int res = lcm(a,b);
    int res2 = lcm_by_hcf(a,b); // a x b = LCM(a, b) * GCD (a, b)  // Optimal - hcf by euclidean
    cout<<"LCM of "<<a<<" & "<<b<<" is :"<<res<<endl;
    cout<<"(Optimised)LCM of "<<a<<" & "<<b<<" is :"<<res2<<endl;
    return 0;
}