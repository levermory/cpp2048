#include "game.hpp"

void game_loop(int steps, Matrix &field)
{
    char input;
    system("clear");
    for (;;)
    {
        system("stty raw");
        input = getchar();
        system("stty cooked");
        // std::cout  << (int)input;
        if (input == (char)32)
        {
            field.game_step();
            system("clear");
            std::cout << field;
            // break;
        }
        else if (input == '.')
        {
            break;
        }
    }
}

// while (1)
// {
//     system("stty raw");
//     c = getchar();
//     // terminate when "." is pressed
//     // system("stty cooked");
//     // system("clear");
//     std::cout << '\r' << c << " was pressed";
//     if (c == '.')
//     {
//         // system("stty cooked");
//         // exit(0);
//         break;
//     }
// }