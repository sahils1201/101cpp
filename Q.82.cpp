#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Enter the number of rows for the pattern: ";
    cin >> rows;

    printPattern(rows);

    return 0;
}
