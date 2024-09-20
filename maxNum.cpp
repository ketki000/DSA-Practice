#include <iostream>
using namespace std;

int findMaxNum(int arr[],int size);
int findMinNum(int arr[],int size);
int findMaxNumRecursive(int arr[],int size,int i);
int findMinNumRecursive(int arr[],int size,int i);

int main(){

    int arr[] = {20,1,-9,7,25};
    int size = sizeof(arr)/sizeof(arr[0]);

    // int maxNum = findMaxNum(arr,size);
    // int minNum = findMinNum(arr,size);
   //  int maxNum = findMaxNumRecursive(arr,size,0);
    int minNum = findMinNumRecursive(arr,size,0);


   // cout<<"Max number of array is: "<<maxNum<<endl;
    cout<<"Min number of array is: "<<minNum<<endl;

    return 0;
}

//Iterative approach
//Time Complexity - O(n) Space Complexity O(1)
int findMinNum(int arr[],int size){
    int min = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min= arr[i];
        }
    }
    return min;
}

//Iterative approach
//Time Complexity - O(n) Space Complexity O(1)
int findMaxNum(int arr[],int size){
    int max = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

//Recursive Approach
// Time complexity - O(n) Space complexity O(n) for recursive calls
int findMaxNumRecursive(int arr[],int size,int i){
if(i==size-1){
    return arr[i];
}
else {
    arr[i+1] = max(arr[i],arr[i+1]);
   
    return findMaxNumRecursive(arr,size,i+1);
}
}

//Recursive Approach
// Time complexity - O(n) Space complexity O(n) for recursive calls
int findMinNumRecursive(int arr[],int size,int i){
if(i == size-1){
    return arr[i];
}
else{
    arr[i+1] = min(arr[i],arr[i+1]);
 cout<<"min "<<arr[i]<<" "<< arr[i+1]<<" "<<i<<" "<<endl;
    return findMinNumRecursive(arr,size,i+1);
}
}
