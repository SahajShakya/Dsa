let n = 4;

for (let i = 0; i < n; i++) {  // Outer loop
    // Spaces
    let spaces = '';  // Initialize an empty string for spaces
    for (let j = 0; j < i; j++) {  // Inner loop for spaces
        spaces += ' ';  // Add one space to the string
    }

    // Numbers
    let numbers = '';  // Initialize an empty string for numbers
    for (let j = 0; j < n - i; j++) {  // Inner loop for numbers
        numbers += (i + 1);  // Add the number (i + 1) to the string
    }

    console.log(spaces + numbers);  // Print the spaces and numbers together
}
