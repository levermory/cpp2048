#ifndef MATRIX
#define MATRIX

#include <iostream>

class Matrix
{
private:
    int size;
    int *data;

public:
    Matrix(){};
    Matrix(int);
    ~Matrix();

    void game_step();

    friend std::ostream &operator<<(std::ostream &, Matrix);
};

#endif