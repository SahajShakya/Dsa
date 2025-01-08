function printBackwardPyramid(n) {
    // Outer loop to control the number of rows
    for (let i = 0; i < n; i++) {
        let line = '';  // Store the current line
        // Print spaces (i spaces)
        for (let j = 0; j < i; j++) {
            line += ' ';  // Append space
        }
        // Print the first set of numbers (from 1 to n - i)
        for (let j = 1; j <= n - i; j++) {
            line += j;  // Append numbers incrementing
        }
        // Print the second set of numbers (from n - i - 1 to 1)
        for (let j = n - i - 1; j >= 1; j--) {
            line += j;  // Append numbers decrementing
        }
        // Print the current line
        console.log(line);
    }
}
// Example usage
printBackwardPyramid(4);
