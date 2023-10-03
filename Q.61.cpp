#include <iostream>
#include <vector>
using namespace std;

int findMajorityElement(vector<int>& nums) {
    int candidate = -1;
    int count = 0;

    // Find a candidate for the majority element using Moore's Voting Algorithm
    for (int i = 0; i < nums.size(); i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Verify if the candidate is the majority element
    count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > nums.size() / 2) {
        return candidate;
    } else {
        return -1; // No majority element found
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> nums[i];
    }

    int majorityElement = findMajorityElement(nums);

    if (majorityElement != -1) {
        cout << "The majority element in the array is: " << majorityElement << endl;
    } else {
        cout << "No majority element found in the array." << endl;
    }

    return 0;
}
