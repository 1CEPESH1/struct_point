//
// Created by т on 29.04.2023.
//
#include "Struct.h"
#ifndef STRUCT_POINT_FUNCTION_H
#define STRUCT_POINT_FUNCTION_H


void RecordAndReadToFile(const int SIZE, student arr[])
{
    std::string NameFile;
    int Number;


    std::cout << "enter the file name, do not forget to enter the file extension" << std::endl;
    std::cin >> NameFile;

    std::cout << "1. -> write to file, 2. -> read from file" << std::endl;
    std::cin >> Number;


    bool TrueOrFalse = true;
    while(TrueOrFalse)
    {
        if(Number == 1)
        {
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
        if(Number == 2)
        {
            std::ifstream fin;
            fin.open(NameFile);

            if(!fin.is_open())
            {
                std::cout << "file open error!" << std::endl;
            }
            else
            {
                std::cout << "file open!" << std::endl;

                std::string str;
                while (!fin.eof())
                {
                    getline(fin, str);
                    std::cout << str << std::endl ;

                }
            }
            fin.close();
        }
        Number = 0;
        std::cout << "1. -> write to file, 2. -> read from file, 3 -> exit" << std::endl;
        std::cin >> Number;

        if(Number == 3)
        {
            TrueOrFalse = false;
        }
    }
}
#endif //STRUCT_POINT_FUNCTION_H
