#ifndef PHANSO_H
#define PHANSO_H
#include <iostream>
using namespace std;

/*
 * No description
 */
class PhanSo
{
	private:
		int tu, mau;
		
	public:
		void nhap();
		void xuat();
		void rutGon();
		int UCLN(int a, int b);
		PhanSo cong(PhanSo ps);
		PhanSo tru(PhanSo ps);
		PhanSo nhan(PhanSo ps);
		PhanSo chia(PhanSo ps);
};

#endif // PHANSO_H

