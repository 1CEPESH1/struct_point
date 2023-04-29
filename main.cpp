#include "Struct.h"
#include "Function.h"
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


    RecordAndReadToFile(SIZE, arr);

    return 0;
}