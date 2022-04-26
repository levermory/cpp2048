#include <iostream>
#include "matrix.hpp"

void game_loop(int steps, Matrix &field)
{
    for (size_t i = 0; i < steps; i++)
    {
        field.game_step();
    }
}

int main(int, char **)
{
    std::cout << "Hello, world!\n";

    Matrix field = Matrix(4);
    short steps = 5;
    game_loop(steps, field);
    std::cout << field;
    // delete mat;

    return EXIT_SUCCESS;
}
