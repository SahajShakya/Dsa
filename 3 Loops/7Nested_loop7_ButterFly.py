def print_butterfly(n):
    # Upper half of the butterfly
    for i in range(1, n + 1):
        # Left part (i stars)
        print('*' * i, end='')
        # Middle spaces (2 * (n - i) spaces)
        print(' ' * (2 * (n - i)), end='')
        # Right part (i stars)
        print('*' * i)
    # Lower half of the butterfly
    for i in range(1, n):
        # Left part (n - i stars)
        print('*' * (n - i), end='')
        # Middle spaces (2 * i - 1 spaces)
        print(' ' * (2 * i - 1), end='')
        # Right part (n - i stars)
        print('*' * (n - i))
# Input: Number of rows in half butterfly
n = 4
print_butterfly(n)
