//
// Created by т on 28.04.2023.
//
#include <iostream>
#include <string>


#ifndef STRUCT_POINT_STRUCT_H
#define STRUCT_POINT_STRUCT_H

struct student
{
    public:


    student (std::string Name, std::string Order, std::string Average)
    {
        this->Name = Name;
        this->Order = Order;
        this->Average = Average;
    }

    std::string GetInfo()
    {
        return "Name: " + Name + " Order: " + Order + " Average: " + Average + "\n";
    }


    private:

    std::string Name;
    std::string Order;
    std::string Average;

};

#endif //STRUCT_POINT_STRUCT_H
