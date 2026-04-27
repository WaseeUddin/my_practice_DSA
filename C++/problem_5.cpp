#include <iostream>
using namespace std;

void bubbleSortLength(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].length() > arr[j + 1].length()) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    string a[] = {"apple", "bat", "carrot", "dog"};
    int n = sizeof(a) / sizeof(a[0]);

    bubbleSortLength(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
