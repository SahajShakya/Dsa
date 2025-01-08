function printButterfly(n) {
    // Upper half of the butterfly
    for (let i = 1; i <= n; i++) {
        // Left part (i stars)
        let row = '*'.repeat(i);

        // Middle spaces (2 * (n - i) spaces)
        row += ' '.repeat(2 * (n - i));

        // Right part (i stars)
        row += '*'.repeat(i);

        console.log(row);
    }
    // Lower half of the butterfly
    for (let i = 1; i < n; i++) {
        // Left part (n - i stars)
        let row = '*'.repeat(n - i);

        // Middle spaces (2 * i - 1 spaces)
        row += ' '.repeat(2 * i - 1);

        // Right part (n - i stars)
        row += '*'.repeat(n - i);

        console.log(row);
    }
}
// Input: Number of rows in half butterfly
const n = 4;
printButterfly(n);
