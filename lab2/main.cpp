#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void nhap(long &a, int &b, float &c)
{
	cout << "Nhap so tien ban gui vao: ";
	cin >> a;
	cout << "So nam ban muon gui: ";
	cin >> b;
	cout << "Lai xuat co dinh: ";
	cin >> c;
}

void xuat(long a, int b, float c)
{
	double tongTien = a;
	for(int i = 1; i <= b; i++)
	{
		tongTien = tongTien + (tongTien*(c/100));
	}
	cout << "\nTong so tien sau " << b << " nam la: " << tongTien << "Dollars" << endl;
}


int main(int argc, char *argv[]) 
{
	long a;
	int b;
	float c;
	nhap(a ,b, c);
	xuat(a, b ,c);
	return 0;
}
