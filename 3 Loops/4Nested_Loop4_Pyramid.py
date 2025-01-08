def print_pattern(n):
    for i in range(n):  # Outer loop
        # Create spaces n - i - 1
        line = ' ' * (n - i - 1)  # Generate the leading spaces

        # Numbers 1: from 1 to i + 1
        for j in range(1, i + 2):  # Loop to print numbers incrementally from 1 to i+1
            line += str(j)

        # Numbers 2: reverse from i to 1
        for j in range(i, 0, -1):  # Loop to print numbers in reverse from i to 1
            line += str(j)

        # Print the final line for this row
        print(line)

# Example usage
print_pattern(4)
