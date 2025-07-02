#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& arr, int target) {
        int l = 0;
        int h = arr.size() - 1;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (target > arr[mid]) {
                l = mid + 1;
            } else if (target < arr[mid]) {
                h = mid - 1;
            } else {
                return mid;
            }
        }
        return -1;
    }
};

int main() {
    int n, target;
    cout << "Enter number of elements (sorted array): ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target to search: ";
    cin >> target;

    Solution obj;
    int index = obj.search(arr, target);

    if (index != -1)
        cout << "Target found at index: " << index << endl;
    else
        cout << "Target not found in array." << endl;

    return 0;
}
