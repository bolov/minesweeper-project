#pragma once

#include "matrix.h"

const int sk_bomb_cell = -1;

bolov::containers::Matrix<int> create_random_bombs(int column_size, int line_size, int num_bombs);
