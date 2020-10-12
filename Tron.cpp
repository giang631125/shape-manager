#include "Tron.h"

class_Tron::class_Tron(/* args */)
{
}

class_Tron::~class_Tron()
{
}
void class_Tron::nhap()
{
    class_shape::set_name();
    cout<<"Nhap ban kinh: ";
    cin>> ban_kinh;
    cout<<"Nhap thanh cong."<<endl<<endl;
}
void class_Tron::xuat()
{
    cout
    <<setw(15)<<"Hinh Tron "<<id_tron
    <<setw(15)<<class_shape::get_name()
    <<setw(15)<<"ban kinh: "    <<setw(3)<<ban_kinh
    <<setw(15)<<"chu vi: "      <<setw(6)<<class_Tron::cv()
    <<setw(15)<<"dien tich: "   <<setw(6)<<class_Tron::dt()
    <<endl;
    id_tron++;
}
double class_Tron::cv()
{
    return 2*3.14*ban_kinh;
}
double class_Tron::dt()
{
    return 3.14*ban_kinh*ban_kinh;
}