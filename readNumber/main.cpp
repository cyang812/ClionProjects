#include <iostream>

int main() {

    int amount = 0 ,value;
    while (std::cin >> value) {
        if (value <= 0) {
            amount = amount + 1;
        }
    }

    std::cout << "Amount of all negative values read is "
              << amount << std::endl;
    return 0;
}