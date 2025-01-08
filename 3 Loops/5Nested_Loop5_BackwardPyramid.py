def print_backward_pyramid(n):
    for i in range(n):  # Outer loop (rows)
        # Create spaces i (spaces increase as you go down)
        line = ' ' * i

        # Numbers 1: from 1 to n - i
        for j in range(1, n - i + 1):  # Loop to print numbers incrementing
            line += str(j)

        # Numbers 2: reverse from n - i - 1 to 1
        for j in range(n - i - 1, 0, -1):  # Loop to print numbers in reverse
            line += str(j)

        # Print the line
        print(line)

# Example usage
print_backward_pyramid(4)


# Spaces: ' ' * i generates the spaces at the beginning of each row. As i increases, the number of spaces increases.
# Increasing Numbers: The first loop prints numbers from 1 to n - i.
# Decreasing Numbers: The second loop prints the numbers in reverse, starting from n - i - 1 and decreasing down to 1.
# Breakdown for n = 4:
# i = 0:
# Spaces: 0 spaces ('')
# Numbers: 1 2 3 4
# Reverse: 3 2 1
# Output: "1234321"
# i = 1:
# Spaces: 1 space (' ')
# Numbers: 1 2 3
# Reverse: 2 1
# Output: " 12321"
# i = 2:
# Spaces: 2 spaces (' ')
# Numbers: 1 2
# Reverse: 1
# Output: " 121"
# i = 3:
# Spaces: 3 spaces (' ')
# Numbers: 1
# Reverse: (no reverse numbers)
# Output: " 1"