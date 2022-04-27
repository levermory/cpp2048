#include <iostream>
#include "matrix.hpp"
#include "game.hpp"



int main(int, char **)
{
    std::cout << "Hello, world!\n";

    Matrix field = Matrix(4);
    short steps = 5;
    game_loop(steps, field);
    // std::cout << field;
    // delete mat;

    return EXIT_SUCCESS;
}
