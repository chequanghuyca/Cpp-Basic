#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void HamGiDo(int x,int y=1)
{
	cout<<(x+y)<<endl;
}
int main(int argc, char** argv) {	
	cout<<endl;
	HamGiDo(9);
	HamGiDo(9,2);
	return 0;
}
