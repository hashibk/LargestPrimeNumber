# Find Largest Prime Number

This C++ program contains a function that identifies the largest prime number in an array of integers. It iterates through the array, checks each number for primality, and returns the largest prime number.

## Features

- **Prime Number Check**: Determines if a number is prime by checking divisibility up to its square root.
- **Largest Prime Finder**: Keeps track of the largest prime number found in the array.
- **Handle Special Cases**: Specifically checks for the number `2`, the smallest prime number.

## Usage

1. **Define Array**: Set up the array of integers to search for the largest prime number.
2. **Find Largest Prime**: Call the `findlargestprimenum` function to find and return the largest prime number in the array.
3. **Display Result**: The program prints the largest prime number found.

### Example

In the given code:

- An array of size `7` with elements `{5, 5, 11, 11, 2, 2, 17}` is defined.
- The function `findlargestprimenum` is called to find the largest prime number in this array.

**Output**:
```bash
17
