#include <iostream>
using namespace std;

double nth_term_GP(int a,int b, int n){
double r = double(b)/double(a);
double nthTerm = a;
for(int i=1;i<n;i++){
    nthTerm *= r;
}
return nthTerm;
}
int main(){
int a,b,n;
cout<<"First and second terms of GP : "<<endl;
cin>>a>>b;
cout<<"Enter the number of terms : "<<endl;
cin>>n;

double res = nth_term_GP(a,b,n);
cout<<n<<"th term of GP is : "<<res<<endl;

    return 0;
}