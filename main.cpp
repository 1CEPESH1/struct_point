#include <iostream>


struct point
{
    int x = 5;
    int y = 8;
    int z = 2;

};



int main() {

    point m;

    std::cout << m.x << std::endl;
    std::cout << m.y << std::endl;
    std::cout << m.z << std::endl;

    return 0;
}