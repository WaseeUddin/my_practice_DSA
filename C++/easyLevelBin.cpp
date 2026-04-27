#include<iostream>
#include <vector>
using namespace std;

int binary_search(vector<int>arr, int tar){
    int st=0, end=arr.size()-1;

    while(st <= end){
        int mid = (st + end)/2;

        if(tar > arr[mid]){
            st = mid +1;
            }else if(tar < arr[mid]){
                end = mid - 1;
            }else{
                return mid;
            }
        }
        return -1;
    }


int main() {
    vector<int> arr1 = {1,3,5,7,9}; //odd
    int tar1 = 5;

    cout << binary_search(arr1, tar1) << endl;

    vector<int> arr2 = {1,3,5,7,9}; //even
    int tar2 = 0;

    return 0;
}
