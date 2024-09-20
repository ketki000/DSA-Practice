#include <iostream>
using namespace std;
void searchElement(int arr[5],int size,int k);

int main(){

    int arr[] = {3,5,8,1,2};
    int k = 1;
    int size = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    searchElement(arr,size,k);
    return 0;
}

void searchElement(int arr[5],int size,int k){
cout<<"size"<< size<<endl;
cout<<"search element  : "<< k<<endl;
int i=0;
while(i<size){
    if(k==arr[i]){
    cout<<arr[i];
    return;
    }
    i++;
}
cout<<"-1";
}