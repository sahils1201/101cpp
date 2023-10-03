#include <iostream>
#include <vector>
using namespace std;

int countWaysToClimbStairs(int n, const vector<int>& stepSizes) {
    vector<int> dp(n + 1, 0);
    dp[0] = 1;  // Base case: There is one way to reach the ground floor

    for (int i = 1; i <= n; i++) {
        for (size_t j = 0; j < stepSizes.size(); j++) {
            if (i - stepSizes[j] >= 0) {
                dp[i] += dp[i - stepSizes[j]];
            }
        }
    }

    return dp[n];
}

int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;

    int numStepSizes;
    cout << "Enter the number of step sizes: ";
    cin >> numStepSizes;

    vector<int> stepSizes(numStepSizes);
    cout << "Enter the step sizes:" << endl;
    for (int i = 0; i < numStepSizes; i++) {
        cout << "Enter step size " << i + 1 << ": ";
        cin >> stepSizes[i];
    }

    int ways = countWaysToClimbStairs(n, stepSizes);
    cout << "Number of ways to climb the stairs: " << ways << endl;

    return 0;
}
