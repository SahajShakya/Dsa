#include<iostream>
using namespace std;
int main() {
    int n = 4;  // Define the number of rows
    // Outer loop to control the number of rows
    for (int i = 0; i < n; i++) {
        // Print spaces (i spaces)
        for (int j = 0; j < i; j++) {
            cout << " ";  // Print space
        }
        // Print the first set of numbers (from 1 to n - i)
        for (int j = 1; j <= n - i; j++) {
            cout << j;  // Print numbers incrementing
        }
        // Print the second set of numbers (from n - i - 1 to 1)
        for (int j = n - i - 1; j >= 1; j--) {
            cout << j;  // Print numbers decrementing
        }
        // Move to the next line after each row
        cout << endl;
    }
    return 0;
}
