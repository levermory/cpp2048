#ifndef MATRIX
#define MATRIX

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