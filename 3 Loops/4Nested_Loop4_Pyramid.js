function printPattern(n) {
    for (let i = 0; i < n; i++) { // Outer loop
        // Spaces n - i - 1
        let line = ' '.repeat(n - i - 1); // Create spaces at the start of the line

        // Numbers 1: i + 1
        for (let j = 1; j < i + i + 1; j++) {
            line += j; // Add numbers incrementally
        }

        // Numbers 2: reverse
        for (let j = i; j >= 0; j--) {
            line += j; // Add numbers in reverse
        }

        console.log(line); // Print the final line for this row
    }
}

printPattern(4);
