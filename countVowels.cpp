#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string str = "KETKI is a Good Girl";
    int count=0;
    for(int i=0;i<str.length();i++){
        switch(str[i]){
            case 'a':
                count++;
                break;
            case 'e':
                count++;
                break;
            case 'i':
                count++;
                break;
            case 'o':
                count++;
                break;
            case 'u':
                count++;
                break;
            case 'A':
                count++;
                break;
            case 'E':
                count++;
                break;
            case 'I':
                count++;
                break;
            case 'O':
                count++;
                break;
            case 'U':
                count++;
                break;
        }
    }
    cout<<"Number of vowels are : "<<count;

    
    return 0;
}