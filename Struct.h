//
// Created by т on 28.04.2023.
//
#include <iostream>
#include <string>
#include <map>


#ifndef STRUCT_POINT_STRUCT_H
#define STRUCT_POINT_STRUCT_H

struct student
{
    public:


    student (std::string Name, int Order, int Average)
    {
        this->Name = Name;
        this->Order = Order;
        this->Average = Average;
    }

    std::string GetInfo()
        {
            std::string OrderS = std::to_string(Order);
            std::string AverageS = std::to_string(Average);


            return "Name: " + Name + " Order: " +  OrderS + " Average: " + AverageS + "\n";

    }

    private:

    std::string Name;
    int Order;
    int Average;

};

#endif //STRUCT_POINT_STRUCT_H
