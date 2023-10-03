#include <iostream>
using namespace std;
bool isPalindrome(int number) {
    int givenNumber = number;
    int reversedNumber = 0;
    while (number > 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }
    return givenNumber == reversedNumber;
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isPalindrome(number))
        cout << number << " is a palindrome.\n";
    else
        cout << number << " is not a palindrome.\n";

    return 0;
}
