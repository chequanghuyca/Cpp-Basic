#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void TachLayTrai(char *strGoc,char *&strDau,char *&strSau);
void TachLayPhai(char *strGoc,char *&strCuoi,char *&strTruoc);
int main(int argc, char** argv) {
	char *strGoc=new char[255];
	strcpy(strGoc,"Nguyen Van Minh");
	char *strDau=new char[255];
	char *strSau=new char [255];
	TachLayTrai(strGoc,strDau,strSau);
	cout<<strDau<<endl;
	cout<<strSau<<endl;
	cout<<"\n---------------------\n";
	char *strCuoi=new char[255];
	char *strTruoc=new char [255];
	strcpy(strCuoi,"");
	strcpy(strTruoc,"");
	TachLayPhai(strGoc,strCuoi,strTruoc);
	cout<<strCuoi<<endl;
	cout<<strTruoc<<endl;
	return 0;
}
void TachLayTrai(char *strGoc,char *&strDau,char *&strSau)
{
	char *p=strchr(strGoc,' ');
	int lSpace=p-strGoc;
	strncpy(strDau,strGoc,lSpace);
	p=p+1;
	strSau=p;
	//"Nguyen Van Minh"
}
void TachLayPhai(char *strGoc,char *&strCuoi,char *&strTruoc)
{
	//"Nguyen Van Minh"
	int j=0;
	for(int i=strlen(strGoc)-1;i>=0;i--)
	{
		if(strGoc[i]==' ')
		{
			j=i+1;
			break;
		}
	}
	int i2=0;
	for(int i=j;i<strlen(strGoc);i++)
		{
			strCuoi[i2]=strGoc[i];
			i2++;
		}
	strncpy(strTruoc,strGoc,j-1);
}
