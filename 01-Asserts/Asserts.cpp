#include <iostream>
#include <cassert>
#include <iomanip>

int main() {
    //bool
    assert(true);
    assert( not false);
    assert (true and true );
    assert ((true or false) == not false);
    // double
    assert (0.5 * 2 == 1.0);
    assert (1.0 == 0.1*10);
    assert (0.5 == 0.25*2);
    assert (1.0 == 0.1*10);
    // int
    assert (6 == 3+3);
    assert (3==3);
    assert(8 == 16/2);
    assert(32 != 16*3);
    // char
    assert('a' != 'b');

    assert(38 != 32);
    //unsigned
    assert( 3 >= 1);
    assert(3 != 4);
}
