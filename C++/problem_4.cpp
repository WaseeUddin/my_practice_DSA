#include <iostream>
#include <cmath>  // for abs()

using namespace std;

void bubbleSortAbs(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (abs(arr[j]) > abs(arr[j + 1])) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int a[] = {-10, 5, -3, 7, -2};
    int n = sizeof(a) / sizeof(a[0]);

    bubbleSortAbs(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
