#include <iostream>

void drawChessboard() {
    char letters[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H' };

    for (int i = 8; i >= 1; --i) {
        std::cout << i << " ";
        for (int j = 0; j < 8; ++j) {
            if ((i + j) % 2 == 0) {
                std::cout << "\033[47m"; // white background
            }
            else {
                std::cout << "\033[40m"; // black background
            }
            std::cout << " " << letters[j] << i << " ";
        }
        std::cout << "\033[0m" << std::endl; // reset background color
    }

    std::cout << "   ";
    for (int k = 0; k < 8; ++k) {
        std::cout << " " << letters[k] << " ";
    }
    std::cout << std::endl;
}

int main() {
    drawChessboard();
    return 0;
}