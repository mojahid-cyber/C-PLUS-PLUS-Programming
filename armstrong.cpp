#include <iostream>
using namespace std;

int main() {
    int n, original, remainder, sum = 0;

    cout << "Enter an integer: ";
    cin >> n;

    original = n;

    while (n != 0) {
        remainder = n % 10;
        sum = sum + (remainder * remainder * remainder);
        n = n / 10;
    }

    if (sum == original) {
        cout << "The number is an Armstrong number.";
    } else {
        cout << "The number is not an Armstrong number.";
    }

    return 0;
}