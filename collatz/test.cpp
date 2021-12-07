#include <iostream>
#include <cassert>
#include "lib/collatz.hpp"

using namespace std;

int main() {
    try {
        // Trivial examples
        assert(collatz(1) == 0);
        assert(collatz(2) == 1);
        assert(collatz(3) == 7); // 3 10 5 16 8 4 2 1

        // Well known examples from wikipedia : https://en.wikipedia.org/wiki/Collatz_conjecture
        assert(collatz(27) == 111);
        assert(collatz(871) == 178);            // less than 10^3
        assert(collatz(77031) == 350);         // less than 10^6
        assert(collatz(670617279) == 986);     // less than 10^9 
        assert(collatz(989345275647) == 1348); // less than 10^12
    } catch(...) {
        std::cout << "[!] Tests failed\n";
        exit(1);
    }

    std::cout << "[+] Tests passed\n";
}