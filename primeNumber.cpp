#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;

    if (n <= 1) {
        cout << "It is not a prime number";
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i * i <= n; i++) { // Check divisors only up to √n
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "It is a prime number";
    else
        cout << "It is not a prime number";

    return 0;
}
