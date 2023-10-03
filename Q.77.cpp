#include <iostream>
#include <unordered_map>
using namespace std;
unordered_map<int, long long> memo;  // Memoization table

long long factorial(int n) {
    if (n <= 1)
        return 1;

    // Check if the result for n is already memoized
    if (memo.find(n) != memo.end())
        return memo[n];

    // Calculate factorial and memoize the result
    memo[n] = n * factorial(n - 1);

    return memo[n];
}
int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." <<endl;
        return 1;
    }

    long long result = factorial(n);

    cout << "Factorial of " << n << " is: " << result << endl;

    return 0;
}
