//Fibonaci Triangle
#include <iostream>
using namespace std;
void fibonaci(int n){
 int a = 1;
    int b = 1;
    int c;
    if(n ==1){
        cout << a << endl;
        return;
    } 
    if(n==2){
        cout<< a<< " "<<b<<" "<< endl;
        return;
    }
    cout<< a<< " "<<b<<" ";
    for(int i = 1;i<=n-2;i++){
        c = a+b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
    cout<<endl;
    return;
}
int main(){
    int k;
     cout<< "enter the number of fibonaci triangle rows:"<<endl;
     cin>>k;

     for(int i =1;i<=k;i++){
        fibonaci(i);
     }

    return 0;
}