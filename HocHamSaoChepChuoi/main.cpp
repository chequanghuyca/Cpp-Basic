#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char str1[25],str2[25];
	cout<<"Nhap chuoi 1:";
	gets(str1);
	cout<<"Chuoi 2:";
	strcpy(str2,str1);//str2=str1<= SAI
	cout<<str2;
	char str3[6];
	strncpy(str3,str1,6);
	cout<<"\nChuoi str3="<<str3<<endl;
	return 0;
}
