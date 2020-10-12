#include <iostream>
using namespace std;
#include <vector>
#include "Menu.h"
#include "Shape.h"
#include "Tag.h"
#include "Hcn.h"
#include "Tron.h"

#define hinh_chu_nhat   1
#define hinh_tam_giac   2
#define hinh_tron       3
#define chon_lai_hinh   clh
#define nhap_lai_hinh   nlh
// #define nhap_lai_tg     nltg

int main(){
    int enable=1;
    int id_shape=0;
    int id_hcn[100], sum_hcn=0;
    int id_tag[100], sum_tag=0;
    int id_tron[100],sum_tron=0;
    int hinh_xoa, hinh_sua;
    class_shape** hinh_hoc = new class_shape * [100];
    std::vector<class_shape*> shape_table;
    std::vector<class_shape*>::iterator it = shape_table.begin();
    std::vector<class_shape*>::iterator iend = shape_table.end();
    for(; it!= iend; it++){
        class_shape* ptr = *it;
    }
    class_hcn* hcn_table;
    class_tag* tag_table;
    class_Tron* tron_table;
    while(enable==1){
        class_menu m; 
        
        switch (m.chonPhuongThuc()-48)
        {
        case 1: // Nhap
            
            chon_lai_hinh:
            m.chonHinh();
            nhap_lai_hinh:  
            id_shape++;     
            switch (m.loaiHinhHoc-48)
            {
            case 1: // hcn
                hcn_table = new class_hcn;
                hcn_table->nhap();
                shape_table.push_back(hcn_table);

                // hinh_hoc[id_shape] = new class_hcn();
                // hinh_hoc[id_shape]->loai_hinh = hinh_chu_nhat;
                // cout<<id_shape<<"Hinh chu nhat "<<sum_hcn<<endl;
                // hinh_hoc[id_shape]->nhap();
                // id_hcn[sum_hcn]=id_shape;
                sum_hcn++;
                m.chonNhapTiep();
                if (m.menu_nhap_tiep==1)
                    goto nhap_lai_hinh;
                else continue;
                break;
            case 2: // tag
                tag_table = new class_tag;
                tag_table->nhap();
                shape_table.push_back(tag_table);

                // hinh_hoc[id_shape] = new class_tag();
                // cout<<"Hinh tam giac "<<sum_tag<<endl;
                // hinh_hoc[id_shape]->nhap();
                // id_tag[sum_tag]=id_shape;
                sum_tag++;
                m.chonNhapTiep();
                if (m.menu_nhap_tiep==1)
                    goto nhap_lai_hinh;
                else continue;
                break;
            case 3: // tron
                tron_table= new class_Tron;
                tron_table->nhap();
                shape_table.push_back(tron_table);

                // hinh_hoc[id_shape] = new class_Tron();
                // cout<<id_shape<<"Hinh tron "<<sum_tron<<endl;
                // hinh_hoc[id_shape]->nhap();
                // id_tron[sum_tron]=id_shape;
                sum_tron++;
                m.chonNhapTiep();
                if (m.menu_nhap_tiep==1)
                    goto nhap_lai_hinh;
                else continue;
                break;
            default:
                goto chon_lai_hinh;
                break;
            }
            
            break;
        case 2: // Sua
            m.chonHinh();
            switch (m.loaiHinhHoc-48)
            {
            case 1:
                for(int i=0;i<sum_hcn;i++)
                {
                    //cout<<i<<".Hinh "<<i<<"\t";
                }
                //cout<<endl;
                cin>> hinh_sua;
                hinh_hoc[id_hcn[hinh_sua]]->nhap();
                break;
            
            default:
                break;
            }
            break;
        case 3: // Xoa
            m.chonHinh();
            id_shape--;
            switch (m.loaiHinhHoc-48)
            {
            case 1: // hcn
                for(int i=0;i<sum_hcn;i++)
                {
                    //cout<<i<<".Hinh "<<i<<"\t";
                }
                //cout<<endl;
                cin>> hinh_xoa;
                for(int i=hinh_xoa;i<sum_hcn;i++)
                {
                    //delete [] hinh_hoc;                                                     //sai
                    hinh_hoc[id_hcn[i]]->name = hinh_hoc[id_hcn[i-1]]->name;             
                }
                break;
            
            default:
                break;
            }
            break;
        case 4: // In
            // cout<<"STT nhap | Loai hinh | Ten hinh | Thong tin"<<endl;
            // for(int i=0; i<sum_hcn; i++)
            // {
            //     cout<<id_hcn[i]<<"\thinh chu nhat "<<i;
            //     hinh_hoc[id_hcn[i]]->xuat();
            // }
            // for(int i=0; i<sum_tag; i++)
            // {
            //     cout<<id_tag[i]<<"\thinh tam giac "<<i;
            //     hinh_hoc[id_tag[i]]->xuat();
            // }
            // for(int i=0; i<sum_tron; i++)
            // {
            //     cout<<id_tron[i]<<"\thinh tron "<<i;
            //     hinh_hoc[id_tron[i]]->xuat();
            // }
            // cout<< shape_table.size()<<endl;
            for( it = shape_table.begin(); it != shape_table.end(); it++)
            {
                // cout<<(*it);
                //cout << (*it);
                (*it)->xuat();
            }
            m.chonTiep();
            enable = m.menu_enable;          
            break;
        case 5: // Thoat
            enable = 0;
            break;
        default:
            break;
        }   
    }
    return 0;
}
