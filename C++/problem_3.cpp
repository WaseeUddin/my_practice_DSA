#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int findMinDiff(const vector<int>& arr) {
    int minDiff = INT_MAX;
    for(int i = 1; i < arr.size(); i++) {
        int diff = abs(arr[i] - arr[i - 1]);
        minDiff = min(minDiff, diff);
    }
    return minDiff;
}

int main() {
    vector<int> arr = {15, 7, 2, 12, 13};
    sort(arr.begin(), arr.end()); // sort first!
    cout << "Minimum difference: " << findMinDiff(arr) << endl;
    return 0;
}
