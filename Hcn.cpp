#include"Hcn.h"

class_hcn::class_hcn(/* args */)
{
}

class_hcn::~class_hcn()
{
}

void class_hcn::nhap()
{
    class_shape::set_name();
    cout<<"Kich thuoc: "<<endl;
    cout << "Chieu cao: ";
    cin >> chieu_cao;
    cout << "Chieu rong: ";
    cin >> chieu_rong;
    cout<<"Nhap thanh cong!"<<endl;

}
void class_hcn::xuat()
{
    outfile.open("out.txt");
    // outfile.open("out.txt",ios::app);
    outfile 
    <<setw(15)<<class_shape::get_name()
    <<setw(15)<<"cao: "         <<setw(6)<<chieu_cao
    <<setw(15)<<"rong: "        <<setw(6)<<chieu_rong
    <<setw(15)<<"chu vi: "      <<setw(6)<<chuVi()
    <<setw(15)<<"dien tich: "   <<setw(6)<<dienTich()
    <<endl;
    outfile.close();
    // outfile.open("out.txt");
    
    cout
    <<setw(15)<<"Hinh Chu Nhat "
    <<setw(15)<<class_shape::get_name()
    <<setw(15)<<"cao: "         <<setw(6)<<chieu_cao
    <<setw(15)<<"rong: "        <<setw(6)<<chieu_rong
    <<setw(15)<<"chu vi: "      <<setw(6)<<chuVi()
    <<setw(15)<<"dien tich: "   <<setw(6)<<dienTich()
    <<endl;
}
int class_hcn::chuVi()
{
    return 2*(chieu_cao+chieu_rong);
}
int class_hcn::dienTich()
{
    return chieu_cao * chieu_rong;
}