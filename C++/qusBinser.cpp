#include <iostream>
#include <vector>
using namespace std;

int findSmallestMissing(vector<int> arr) {
    int st = 0, end = arr.size() - 1;

    while (st <= end) {
        int mid = (st + end) / 2;

        if (arr[mid] == mid) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return st;
}

int main() {
    vector<int> arr = {0, 1, 2, 3, 4, 6, 9, 11, 15};

    cout << "The smallest missing element is "
         << findSmallestMissing(arr) << endl;

    return 0;
}
