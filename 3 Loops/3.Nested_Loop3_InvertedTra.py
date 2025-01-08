n = 4
for i in range(n):  # Outer loop
    # Spaces
    spaces = ' ' * i  # Create a string of i spaces

    # Numbers
    numbers = str(i + 1) * (n - i)  # Repeat the number (i + 1), (n - i) times

    print(spaces + numbers)  # Print the spaces and numbers together


# Explanation for Python:
# Outer loop: The outer loop runs from i = 0 to i < n (i.e., 0 to 3 for n = 4).
# Spaces: The spaces string is created by multiplying a space (' ') by i. The number of spaces increases by 1 with each iteration of the outer loop.
# Numbers: The numbers string is created by repeating the string of i + 1 for n - i times.
# Printing: The print(spaces + numbers) statement prints the combined spaces and numbers for each row.