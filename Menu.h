#include<iostream>
using namespace std;

class class_menu
{
private:
    
public:
    int8_t loaiHinhHoc;
    int8_t phuongThuc;
    bool menu_enable;
    bool menu_nhap_tiep;
    class_menu();
    ~class_menu();
    void chonHinh();
    int chonPhuongThuc();
    void chonTiep();
    void chonNhapTiep();
   
};


