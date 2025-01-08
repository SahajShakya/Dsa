let n = 4;

for (let i = 0; i < n; i++) {  // Outer loop
    let row = '';  // Initialize an empty string for the current row
    for (let j = 0; j < i + 1; j++) {  // Inner loop
        row += '*';  // Add a star to the current row string
    }
    console.log(row);  // Print the entire row at once
}
