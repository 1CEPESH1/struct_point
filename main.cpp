#include <iostream>


struct point
{
    int x = 5;
    char xf[10] = "x field";

    int y = 8;
    char yf[10] = "y field";

    int z = 2;
    char zf[10] = "z field";

};



int main() {

    point m;

   std::cout << m.x << "  ->  " << m.xf << std::endl;
   std::cout << m.y << "  ->  " << m.yf << std::endl;
   std::cout << m.z << "  ->  " << m.zf << std::endl;

    return 0;
}