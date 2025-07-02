#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int largest(vector<int> &arr) {
        int maxVal = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    int result = obj.largest(arr);
    cout << "Largest element in array: " << result << endl;

    return 0;
}
