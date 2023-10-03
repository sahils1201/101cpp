#include <iostream>
using namespace std;

//tower of HANOI function implementation
void toh(int n, char from, char mid, char to)
{
    if (n == 1) {
        cout << "Move Disk " << n << " from " << from << " to " << to << endl;
        return;
    }

    toh(n - 1, from, to, mid);
    cout << "Move Disk " << n << " from " << from << " to " << to << endl;
    toh(n - 1, mid, from, to);
}

//main program
int main()
{
    int n;

    cout << "Enter no. of disks:";
    cin >> n;
    //calling the TOH
    toh(n, 'A', 'B', 'C');

    return 0;
}
