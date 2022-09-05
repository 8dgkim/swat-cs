#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    int *p;

    a = 2;
    b = 9;
    p = &a;

    a = 30;
    *p = 6;

    cout << *p + b << '\n';
    cout << p << '\n';

    return 0;
}