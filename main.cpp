#include <iostream>
#include "Struct.h"
#include <string>
#include <fstream>

//struct point
//{
//    int x = 5;
//    char xf[10] = "x field";
//
//    int y = 8;
//    char yf[10] = "y field";
//
//    int z = 2;
//    char zf[10] = "z field";
//
//};



int main() {

    std::ofstream fout;
    fout.open("MyFile.txt", std::ofstream::app);

const int SIZE = 5;

student arr[SIZE]
{
    student("VANNES", 1, 5),
    student("ALEXEY", 2, 5),
    student("VLADISIUS", 3, 5),
    student("LIZA", 4, 5),
    student("ILYA", 5, 999),
};

    for(int i = 0; i < SIZE; i++)
    {
        fout << arr[i].GetInfo() ;
    }

    fout.close();
    return 0;
}