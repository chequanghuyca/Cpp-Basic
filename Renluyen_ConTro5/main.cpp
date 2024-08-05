#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int * CapPhatBoNho(int n);
void NhapMang(int *&pM,int n);
void XuatMang(int *pM,int n);
int *DanhSachMax(int *pM,int n);
void SapGiam(int *&pM,int n);
int main(int argc, char** argv) {
	int *pM=CapPhatBoNho(5);
	NhapMang(pM,5);
	cout<<"Du lieu sau khi nhap:\n";
	XuatMang(pM,5);
	int *pX=DanhSachMax(pM,5);
	cout<<"\n3 phan tu lon nhat:\n";
	XuatMang(pX,3);
	return 0;
}
int * CapPhatBoNho(int n)
{
	int *pM=new int[n];
	return pM;
} 
void NhapMang(int *&pM,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i<<":";
		cin>>*(pM+i);
	}
}
void XuatMang(int *pM,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<*(pM+i)<<"\t";
	}
}
int *DanhSachMax(int *pM,int n)
{
	int m=n>3?3:n;
	int *pX=CapPhatBoNho(m);
	SapGiam(pM,n);
	for(int i=0;i<m;i++)
	{
		*(pX+i)=*(pM+i);
	}
	return pX;
}
void SapGiam(int *&pM,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int a=*(pM+i);
			int b=*(pM+j);
			if(a<b)
			{
				int temp=*(pM+i);
				*(pM+i)=*(pM+j);
				*(pM+j)=temp;
			}
		}
	}
}
