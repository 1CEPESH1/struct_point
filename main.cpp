#include <iostream>
#include "Struct.h"
#include <string>
#include <fstream>
//std::ofstream::app

void RecordToFile(const int SIZE, student arr[])
{
    std::string NameFile;
    int Number;

    std::cout << "1. -> write to file, 2. -> next" << std::endl;
    std::cin >> Number;

    bool TrueOrFalse = true;

    if(Number == 2)
    {
        TrueOrFalse = false;
    }
    while(TrueOrFalse)
    {

        if(Number == 1)
        {
            std::cout << "enter the file name, do not forget to enter the file extension" << std::endl;
            std::cin >> NameFile;

            std::ofstream fout;
            fout.open(NameFile, std::ofstream::app);

            if(!fout.is_open())
            {
                std::cout << "file open error!" << std::endl;
            }
            else
            {
                std::cout << "files are written!" << std::endl;

                for(int i = 0; i < SIZE; i++)
                {
                    fout << arr[i].GetInfo() ;
                }
            }
            fout.close();
        }

        Number = 0;
        std::cout << "1. -> write to file, 2 -> next" << std::endl;
        std::cin >> Number;

        if(Number == 2)
        {
            TrueOrFalse = false;
        }
    }
}

void ReadToFile(const int SIZE, student arr[])
{
    std::string NameFile;
    int Number;

    std::cout << "1. -> read from file, 2. -> next" << std::endl;
    std::cin >> Number;

    bool TrueOrFalse = true;
    if(Number == 2)
    {
        TrueOrFalse = false;
    }
    while(TrueOrFalse) {
        if(Number == 1) {
            std::cout << "enter the file name, do not forget to enter the file extension" << std::endl;
            std::cin >> NameFile;

            std::ifstream fin;
            fin.open(NameFile);

            if (!fin.is_open()) {
                std::cout << "file open error!" << std::endl;
            } else {
                std::cout << "file open!" << std::endl;

                std::string str;
                while (!fin.eof()) {
                    getline(fin, str);
                    std::cout << str << std::endl;

                }
            }
            fin.close();

            Number = 0;
            std::cout << "1. -> write to file, 2 -> next" << std::endl;
            std::cin >> Number;

            if (Number == 2) {
                TrueOrFalse = false;
            }
        }
    }
}

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