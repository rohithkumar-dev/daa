#include <iostream>
using namespace std;

void towersOfHanoiRecursive(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        cout << "Move disk 1 from " << source
             << " to " << destination << "\n";
        return;
    }

    towersOfHanoiRecursive(n - 1, source, destination, auxiliary);

    cout << "Move disk " << n << " from " << source
         << " to " << destination << "\n";

    towersOfHanoiRecursive(n - 1, auxiliary, source, destination);
}

int main() {
    cout << "=== 1a. Towers of Hanoi (Recursive, 3 disks) ===\n";

    towersOfHanoiRecursive(3, 'A', 'B', 'C');

    return 0;
}
