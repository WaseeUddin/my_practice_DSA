//
//target 0
#include<iostream>
#include <vector>
using namespace std;

int binary_search(vector<int>arr, int tar){ //Iterative
    int st=0, end=arr.size()-1;

    while(st <= end){
        int mid = (end-st)/2;

        if(tar > arr[mid]){
            st = mid +1;  //2nd half
            }else if(tar < arr[mid]){
                end = mid - 1; //1st half
            }else{
                return mid;
            }
        }
        return -1;
    }

int recBinarysearch(vector<int> arr, int tar, int st, int end){
    if(st <= end){
        int mid = st + (end-st)/2;
         if(tar > arr[mid]){ //2nd half
            return recBinarysearch(arr, tar, mid+1, end);
         }else if(tar < arr[mid]){ //1st half
             return recBinarysearch(arr, tar, st, mid-1);
         }else { //mid => ans
             return mid;
         }
    }
    return -1;
}
int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; //odd
    int tar1 = 40;

    //cout << binary_search(arr1, tar1) << endl;

    vector<int> arr2 = {-1, 0,3,5,9,12}; //even
    int tar2 = 0;

    cout << binary_search(arr1, tar1) << endl;

    return 0;
}
