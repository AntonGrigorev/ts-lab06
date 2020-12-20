#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

int main() {
    int INF = -1;
    std::vector<std::vector<int>> matrix = {
    {0, 3, 5, 3, INF, INF, INF, INF},
    {INF, 0, INF, INF, 1, INF, INF, INF},
    {INF, INF, 0, 4, 2, INF, INF, INF},
    {INF, INF, INF, 0, 4, INF, INF, INF},
    {INF, INF, INF, INF, 0, 3, 3, INF},
    {INF, INF, INF, INF, INF, 0, INF, 5},
    {INF, INF, INF, INF, INF, INF, 0, 2},
    {INF, INF, INF, INF, INF, INF, INF, 0}
    };

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix.size(); j++) {
            std::cout << std::setw(5) << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;


    for (int k = 0; k < matrix.size(); k++) {
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix.size(); j++) {
                if (i != j && matrix[i][k] != -1 && matrix[k][j] != -1) {
                    if (matrix[i][j] == -1) {
                        matrix[i][j] = matrix[i][k] + matrix[k][j];
                    }
                    else
                    {
                        matrix[i][j] = std::max(matrix[i][j], matrix[i][k] + matrix[k][j]);

                    }
                }
            }
        }
    }

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix.size(); j++) {
            std::cout << std::setw(5) << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

}
