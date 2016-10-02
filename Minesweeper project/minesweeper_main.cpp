#include <iostream>

#include "matrix.h"
#include "grid.h"

using namespace std;

using namespace bolov::containers;

int main()
{
    cout << "mere" << endl;

    Matrix<int> bombs = create_random_bombs(6, 6, 10);

    for (auto l : bombs) {
        for (auto i : l) {
            cout << i << " ";
        }
        cout << endl;
    }


}
