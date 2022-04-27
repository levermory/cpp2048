#include <random>
#include "matrix.hpp"

Matrix::Matrix(int size) : size(size)
{
    data = new int[size * size]();
    // data[rand() % (size * size - 1)] = 2;

    std::cout << "new matrix ";
    std::cout << "size " << size << std::endl;
}

Matrix::~Matrix()
{
    // std::cout << "deleted matrix" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Matrix mat)
{
    // out << '\n';
    for (size_t i = 0; i < mat.size; i++)
    {
        for (size_t j = 0; j < mat.size; j++)
        {
            out << mat.data[i * mat.size + j] << '\t';
        }
        out << '\n';
    }
    return out;
}

void Matrix::game_step()
{
    int place = rand() % (size * size - 1);
    do
    {
        place = rand() % (size * size - 1);
    } while (this->data[place] != 0);
    data[place] = 2;
}