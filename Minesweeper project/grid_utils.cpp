#include <algorithm>
#include <random>

#include "matrix.h"

#include "grid.h"

using namespace bolov::containers;


Matrix<int> create_random_bombs(int column_size, int line_size, int num_bombs)
{
    Matrix<int> bombs{column_size, line_size};

    std::mt19937 random_engine{std::random_device{}()};

    // put random bombs
    std::fill_n(bombs.flat_begin(), num_bombs, sk_bomb_cell);
    std::shuffle(bombs.flat_begin(), bombs.flat_end(), random_engine);

    return bombs;
}
