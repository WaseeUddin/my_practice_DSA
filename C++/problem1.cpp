#include <iostream>
using namespace std;

int kthSmallest_Bubble(int arr[], int n, int k) {
    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
    return arr[k - 1]; // k-th smallest element
}

int main() {
    int arr[] = {6, 5, 1, 3, 4};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    //sizeof(arr) = 5 elements × 4 bytes = 20 bytes
    //sizeof(arr[0]) = 4 bytes

/*
sizeof(arr)`                  | পুরো array এর মোট সাইজ (bytes)
sizeof(arr[0])`               | একেকটা element এর সাইজ (bytes)
sizeof(arr) / sizeof(arr[0])` | মোট কয়টা element আছে array-তে
*/

    cout << "Kth smallest (Bubble Sort): " << kthSmallest_Bubble(arr, n, k) << endl;
    return 0;
}
