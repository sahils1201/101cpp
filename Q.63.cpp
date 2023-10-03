#include <iostream>
#include <vector>
using namespace std;

int findKthSmallest(vector<int>& arr, int k) {
    int n = arr.size();

    if (k <= 0 || k > n)
        return -1;  // Invalid input for K

    // Selection sort to find the Kth smallest element
    for (int i = 0; i < k; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }

    return arr[k - 1];
}

int main() {
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter the value of K to find the Kth smallest element: ";
    cin >> k;

    int kthSmallest = findKthSmallest(arr, k);

    if (kthSmallest != -1) {
        cout << "The Kth smallest element in the array is: " << kthSmallest << endl;
    } else {
        cout << "Invalid input for K." << endl;
    }

    return 0;
}
