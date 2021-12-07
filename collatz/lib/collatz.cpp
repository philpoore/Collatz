#include "collatz.hpp"

int collatz(ll x) {
    int step = 0;
    while(x != 1) {
        if (x % 2) x = 3 * x + 1;
        else x = x / 2;
        step++;
    }
    return step;
}