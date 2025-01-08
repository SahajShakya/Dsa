#include <iostream>
using namespace std;

void printButterfly(int n) {
    // Upper half of the butterfly
    for (int i = 1; i <= n; i++) {
        // Left part (i stars)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Middle spaces (2 * (n - i) spaces)
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        // Right part (i stars)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the butterfly
    for (int i = 1; i < n; i++) {
        // Left part (n - i stars)
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }

        // Middle spaces (2 * i - 1 spaces)
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << " ";
        }

        // Right part (n - i stars)
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n = 4;
    printButterfly(n);
    return 0;
}
