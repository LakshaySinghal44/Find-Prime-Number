Input and Edge Cases:
The user enters a number n.
If n <= 1, it is not a prime number, and the program exits.

Prime Check:
A loop checks divisors of n from 2 to √n.
If any divisor is found (n % i == 0), the number is marked as not prime, and the loop exits.

Output Result:
If no divisors are found, the number is prime.
Otherwise, it is not a prime number.
