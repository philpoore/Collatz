#include <iostream>
#include "lib/collatz.hpp"

using namespace std;

int main() {
    ll a;
    while(!cin.eof()) {
        cin >> a;
        cout << collatz(a) << "\n";
    }
}