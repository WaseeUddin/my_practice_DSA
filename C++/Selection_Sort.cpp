#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){ //0(n^2)

    for(int i=0; i<n-1; i++){ //1*n
            bool isSwap = false;
        for(int j=0; j<n-i-1; j++){ //n*n
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
    isSwap = true;
            }
        }
        if(!isSwap){
            return;
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}
 void selectionSort(int arr[], int n){
     for(int i=0; i<n-1; i++){
        int smallestIdx = i; //unsorted part starting
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[smallestIdx]) {
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
     }
 }
int main(){
    int n = 6;
    int arr[] = {3, 7, 5, 4, 6, 1};

    selectionSort(arr,n);
    printArray(arr, n);
    return 0;
}
