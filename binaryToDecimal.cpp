#include <iostream>
#include <cstdint>
#include <cmath>
#include <string.h>
using namespace std;

void decToBinary(int n){
    int bin[10];
    int i=0;
    while(n>0){
        if(n%2==0){
            bin[i] = 0;
        }
        else{
            bin[i] = 1;
        }
        i++;
        n = n/2;
    } 
    int size = i;
    while(i>0){
        i--;
        cout<<bin[i]<<" ";
    }
   // int size = sizeof(bin)/sizeof(bin[0]);

}

int binaryToDec(int bin){
    int n;
    int i=0;
    int sum=0;
while(bin>0){
    n = bin%10;
    sum+= n*pow(2,i);
    cout<<"sum:"<<sum<<endl;
    bin = bin/10;
    i++;
}
cout<<"bin in the funtion : "<<bin<<endl;
return sum;
}

int main(){
    // int num;
    // cout<<"enter a decimal number"<<endl;
    // cin>>num;
    // decToBinary(num);

    int bin;
    cout<<"enter a binary number"<<endl;
    cin>>bin;
    cout<<binaryToDec(bin)<<endl;
    cout<<"bin after outside the funtion : "<<bin<<endl;
  return 0;
}