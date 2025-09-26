#include <iostream>

int gcd(int a, int b) {
    while(b) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int a = 10035;
    int b = (a-1) * 12;
    std::cout << a << " gcd with " << b << " = " << gcd(a, b) << std::endl;

    return 0;
}