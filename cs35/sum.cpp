#include <iostream>

using namespace std;

int summation(int n) {
    int sum = 0;
    int i = 1;

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}


int summationWhile(int n) {
    int sum = 0;
    int i = 1;

    while (i <= n) {
        sum += i;
        i++;
    }

    return sum;
}


int main() {
    int n = 0;
    int sum = 0;
    int sumWhile = 0;

    cout << "Type a number : ";
    cin >> n;

    sum = summation(n);
    sumWhile = summationWhile(n);

    cout << "The sume of numbers from 1 to " << n << " is " << sum << " or " << sumWhile << '\n';

    return 0;
}