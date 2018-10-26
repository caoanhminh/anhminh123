#include "phanso.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	PhanSo ps1, ps2, tong, hieu, tich, thuong;
	ps1.nhap();
	ps2.nhap();
	
	cout << "Phan so 1 + Phan so 2: " << endl;
	tong = ps1.cong(ps2);
	tong.xuat();
	
	cout << "Phan so 1 - Phan so 2: " << endl;
	hieu = ps1.tru(ps2);
	hieu.xuat();
	
	cout << "Phan so 1 * Phan so 2: " << endl;
	tich = ps1.nhan(ps2);
	tich.xuat();

	cout << "Phan so 1 / Phan so 2: " << endl;
	thuong = ps1.chia(ps2);
	thuong.xuat();
	
	return 0;
}
