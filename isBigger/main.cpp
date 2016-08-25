#include <iostream>

int main() {
    int c1,c2;
    std::cin >> c1 >> c2;
    if(c1==c2){
        std::cout<<"c1 = c2";
    } else {
        c1 > c2 ? std::cout << "c1 is bigger" : std::cout << "c2 is bigger";
    }
    return 0;
}