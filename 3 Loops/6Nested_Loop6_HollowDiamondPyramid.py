def main():
    n = 4
    # Top part of the pyramid
    for i in range(n):
        # Spaces before the first star
        for j in range(n - i - 1):
            print(" ", end="")

        print("*", end="")
        if i != 0:
            # Inner spaces between stars
            for j in range(2 * i - 1):
                print(" ", end="")

            print("*", end="")
        print()
    # Bottom part of the pyramid
    for i in range(n - 1):
        # Spaces before the first star
        for j in range(i + 1):
            print(" ", end="")

        print("*", end="")
        if i != n - 2:
            # Inner spaces between stars
            for j in range(2 * (n - i) - 5):
                print(" ", end="")

            print("*", end="")
        print()
if __name__ == "__main__":
    main()
