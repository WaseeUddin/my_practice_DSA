#include<iostream>
using namespace std;
int selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min_index = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
}
}
int find_median(int arr[], int n){
    selection_sort(arr,n);
    if(n%2 == 0){
        return (arr[n/2 -1] + arr[n/2]);
    }
    else{
        return arr[n/2];
    }
}
int main(){
int arr[] = {5,2,1,4,7};
int n = sizeof(arr) / sizeof(arr[0]);
cout<<"Median value is: " <<find_median(arr,n)<<endl;


}
