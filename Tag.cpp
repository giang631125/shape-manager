#include <iomanip>
#include "Tag.h"
#include <math.h>
// #include <iostream>
// using namespace std;
#define nhap_lai_tg     nltg

class_tag::class_tag()
{
    this->canh1 = 0;
    this->canh2 = 0;
    this->canh3 = 0;
}

class_tag::~class_tag()
{
}
void class_tag::nhap()
{
    cout<<"---Nhap tam giac---";
    class_shape::set_name();
    class_tag::nhapLoaiTamGiac();
    // nhap_lai_tg:
    class_tag::nhapKichThuoc();
    cout<<"Da nhap thanh cong!"<<endl<<endl;
}
void class_tag::nhapLoaiTamGiac()
{
    cout<<"Loai tam giac: \n1. Tam giac thuong. \n2. Tam giac vuong. \n3. Tam giac can."<< endl;;
    cin >> loaiTamGiac;
}
void class_tag::nhapKichThuoc()
{
    bool dieu_kien = 0;
    switch (loaiTamGiac-48)
    {
    case 1:
        do
        {
            cout<<"Nhap 3 canh: "<<endl;
            cin >> canh1;
            cin >> canh2;
            cin >> canh3;
            if((canh1+canh2)>canh3 && (canh1+canh3)>canh2 && (canh2+canh3)>canh1 ){
                dieu_kien = 1;
            }    
            else{
               cout << "Khong thoa man, moi nhap lai."<<endl; 
            }    
        } while (dieu_kien == 0);
        break;
    case 2:
    case 3:
        cout<<"Nhap kich thuoc: "<<endl;
        cout << "Chieu cao: ";
        cin >> chieu_cao;
        cout << "Chieu rong: ";
        cin >> chieu_rong;
        cout<<"Nhap thanh cong!"<<endl<<endl;
        break; 
    default:
        break;
    }
}

int class_tag::chuVi(){
    switch (loaiTamGiac-48)
    {
    case 1:
        break;
    case 2:
        canh_huyen = sqrt(chieu_rong^2+chieu_cao^2);
        canh1=chieu_cao;
        canh2=chieu_rong;
        canh3=canh_huyen;
        cv = chieu_cao + chieu_rong + canh_huyen;
        break;
    case 3:
        canh_huyen = sqrt((chieu_rong/2)^2+chieu_cao^2);
        canh1=chieu_rong;
        canh2=canh_huyen;
        canh3=canh_huyen;
        break; 
    default:
        break;
    }
    return canh1 + canh2 + canh3;
}
int class_tag::dienTich()
{
    double p = cv/2;
    switch (loaiTamGiac-48)
    {
    case 1:
        dt = sqrt(p*(p-canh1)*(p-canh2)*(p-canh3));
        break;
    case 2:
    case 3:
        dt = chieu_rong * chieu_cao;
        break;
    default:
        break;
    }
    return dt;
}
void class_tag::xuat()
{
    cout
    <<setw(15)<<"Tam Giac "<<id_tag
    <<setw(15)<<class_shape::get_name()
    <<setw(15)<<"canh1 "        <<setw(6)<<canh1
    <<setw(15)<<"canh2 "        <<setw(6)<<canh2
    <<setw(15)<<"canh3 "        <<setw(6)<<canh3
    <<setw(15)<<"chu vi: "      <<setw(6)<<chuVi()
    <<setw(15)<<"dien tich: "   <<setw(6)<<dienTich()
    <<endl;
    id_tag++;
}
