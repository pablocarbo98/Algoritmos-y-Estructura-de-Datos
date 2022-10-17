#include <iostream>
#include <cassert>
#include <string>
#include <iomanip>

using namespace std::string_literals;

    int main() {

        //bool  (and or != ==)
        assert(true);
        assert(not false);
        assert (false != true);
        assert (true and true);
        assert ((true or false) == not false);
        assert ((false and true) == false);

        // double (punto flotante)
        assert (0.5 * 2 == 1.0);
        assert (1.0 == 0.1 * 10);
        assert (0.5 == 0.25 * 2);
        assert (1.0 < 1.5);
        assert (1.5 >= 0.9);
        assert(3E2 == 300); // notacion cientifica

        // int (+ - * /)
        assert (6 == 3 + 3);
        assert (3 == 3);
        assert(8 == 16 / 2);
        assert(32 != 16 * 3);
        assert(3 > 2);
        assert(10 >= 10);

        //  char ( + - != == *)
        assert('a' == 97);
        assert(38 != 32);
        assert((97 + 1) == 'b');
        assert(('d' - 43) == '9');
        assert((42 * 2) == 'T');

        //string
        assert(8 == "soypablo"s.length());

        // concatenar
        assert("a1b2"s == "a1"s + "b2"s);
        assert("pablo"s == "pa"s + "blo"s);

        // unsigned
        assert(64u == 64u);
        assert (4u == 2u + 2u);
        assert (3u == 3u);
        assert(4u == 8u / 2u);
        assert(32u != 16u * 3u);
        assert(7u > 5u);
        assert(50u >= 10u);
        
        // limite de cada tipo y memoria

        assert(sizeof 'a'== 1);
        assert(sizeof 65==4);
        assert(sizeof 40897241 == 4);
        assert(sizeof "holas"== 6);
        assert(sizeof "holasoy"== 8);
        assert(sizeof "holasoypablo"== 13);
    }
