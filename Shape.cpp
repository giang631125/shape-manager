#include"Shape.h"
#include <iostream>
using namespace std;

class_shape::class_shape(/*int a, int b*/)
{
}
class_shape::~class_shape()
{
}
    
void class_shape::set_name()
{
    cout<<"Ten: ";
    cin>> name;
    //getline(cin, name);
    // cout<<endl;
}
string class_shape::get_name()
{
    return name;
}
void class_shape::nhap()
{
}
void class_shape::xuat()
{
}