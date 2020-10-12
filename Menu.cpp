#include "Menu.h"
#include "Hcn.h"
class_menu::class_menu()
{
}
class_menu::~class_menu()
{
}
int class_menu::chonPhuongThuc()
{
    cout<< "-----MENU-----\n 1. Nhap du lieu.\n 2. Chinh sua.\n 3. Xoa.\n 4. In\n 5. Thoat."<<endl;
    cin >> class_menu::phuongThuc;
    std::system("clear");
    return class_menu::phuongThuc;
}
void class_menu::chonHinh()
{     
    cout<<"Chon hinh:\n 1.Hinh chu nhat.\n 2.Hinh tam giac.\n 3.Hinh tron."<<endl;
    cin>> class_menu::loaiHinhHoc;   
    std::system("clear"); 
}
void class_menu::chonTiep()
{
    cout<<"1.Tiep tuc\t0.Thoat"<<endl;
    cin>> menu_enable;
}
void class_menu::chonNhapTiep()
{
    cout<<"1.Nhap tiep\t0.Quay lai menu"<<endl;
    cin>> menu_nhap_tiep;
    std::system("clear"); 
}
