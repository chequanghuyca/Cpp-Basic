#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct DiaChi
{
	char TenDuong[255];
	char Quan[150];
	char TinhThanh[150];	
};
struct NhanVien
{
	int Ma;
	char Ten[255];
	int Tuoi;
	DiaChi CoQuan;
	DiaChi NhaRieng;	
};
int main(int argc, char** argv) {
	NhanVien teo;
	teo.Ma=1;
	strcpy(teo.Ten,"Teo");
	teo.Tuoi=23;
	strcpy(teo.CoQuan.TenDuong,"so 1 Lac Long Quan");
	strcpy(teo.CoQuan.Quan,"Quan 11");
	strcpy(teo.CoQuan.TinhThanh,"Tp.HCM");
	strcpy(teo.NhaRieng.TenDuong,"so 2 Au Co");
	strcpy(teo.NhaRieng.Quan,"Quan 11");
	strcpy(teo.NhaRieng.TinhThanh,"Tp.HCM");
	
	cout<<"Thong tin cua Teo:\n";
	cout<<"Ma="<<teo.Ma<<endl;
	cout<<"Ten="<<teo.Ten<<endl;
	cout<<"Tuoi="<<teo.Tuoi<<endl;
	cout<<"Dia chi Co quan:"<<teo.CoQuan.TenDuong<<","<<teo.CoQuan.Quan<<","<<teo.CoQuan.TinhThanh<<endl;
	cout<<"\n-----------------\n";
	NhanVien *pTy=new NhanVien;
	strcpy(pTy->Ten,"Ty");
	strcpy(pTy->NhaRieng.TinhThanh,"Ha Noi");
	cout<<pTy->Ten<<"->"<<pTy->NhaRieng.TinhThanh<<endl;
	return 0;
}
