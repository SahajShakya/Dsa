n = 4

for i in range(n):  # Outer loop
    row = ''  # Initialize an empty string for the current row
    for j in range(i + 1):  # Inner loop
        row += '*'  # Add a star to the current row string
    print(row)  # Print the entire row at once
