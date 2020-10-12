// #define CTAMGIAC_H
// #ifndef CTAMGIAC_H
#include "Shape.h"
// #define nhap_lai_tg     nltg

class class_tag : public class_shape
{
private:
    int8_t loaiTamGiac;
    int id_tag;
    int canh1, canh2, canh3, chieu_cao, chieu_rong;
    double canh_huyen;
    double cv,dt;
public:
    class_tag();
    ~class_tag();
    void nhap();
    void nhapLoaiTamGiac();
    void nhapKichThuoc();
    void xuat();
    int chuVi();
    int dienTich();
};



// #endif