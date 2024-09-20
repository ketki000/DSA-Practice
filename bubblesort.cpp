#include <iostream>
using namespace std;

void bubbleSort(int arr[],int size);

int main()
{
    int arr[] = {10, -2, 4, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr,size);
    for(int i=0;i<size;i++){
        cout<< arr[i]<< " ";
    }
    return 0;
}

void bubbleSort(int arr[],int size){
 int temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}