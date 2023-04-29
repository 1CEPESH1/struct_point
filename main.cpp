#include <iostream>
#include "Struct.h"
#include "Function.h"
#include <string>
#include <fstream>
//std::ofstream::app

int main() {
const int SIZE = 5;

student arr[SIZE]
{
    student("VANNES", 1, 18),
    student("ALEXEY", 2, 18),
    student("VLADISIUS", 3, 18),
    student("LIZA", 4, 18),
    student("ILYA", 5, 19),
};
    int Number2 = 0;
    bool Exit = true;
    while(Exit)
    {
        RecordToFile(SIZE, arr);
        ReadToFile(SIZE, arr);

        std::cout << "1. -> AGAIN!?, 2 -> exit" << std::endl;
        std::cin >> Number2;
        if (Number2 == 2) {
            Exit = false;
        }
        else
        {
            Exit = true;
        }
    }
    return 0;
}