#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;
#include <iomanip>
#include <string>
#include <fstream>



class class_shape
{
    public:
        string name;
        int8_t loai_hinh;
        ofstream outfile;
    public:
        class_shape();
        ~class_shape();
        virtual void set_name();
        virtual string get_name();
        virtual void nhap();
        virtual void xuat();
};

#endif
