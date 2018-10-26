#include "phanso.h" // class's header file

void PhanSo::nhap()
{
	cout << "Nhap tu so: ";
	cin >> tu;
	
	do
	{
		cout << "Nhap mau so: ";
		cin >> mau;
		
		if(mau == 0)
		{
			cout << "Mau so phai khac 0!" << endl;
		}
	}while(mau==0);
}

int PhanSo::UCLN(int a, int b)
{
	while(a!=b)
	{
		if(a>b)
		{	
			a=a-b;
		}
		else 
		{
			b=b-a;
		}
	}
	return a;
}

void PhanSo::rutGon()
{
	int temp = UCLN(tu, mau);
	tu = tu / temp;
	mau = mau / temp;
}

PhanSo PhanSo::cong(PhanSo ps)
{
	PhanSo p;
	p.tu = tu * ps.mau + mau * ps.tu;
	p.mau = mau * ps.mau;
	p.rutGon();
	return p;
}

PhanSo PhanSo::tru(PhanSo ps)
{
	PhanSo p;
	p.tu = tu * ps.mau - mau * ps.tu;
	p.mau = mau * ps.mau;
	p.rutGon();
	return p;
}

PhanSo PhanSo::nhan(PhanSo ps)
{
	PhanSo p;
	p.tu = tu * ps.tu;
	p.mau = mau * ps.mau;
	p.rutGon();
	return p;
}

PhanSo PhanSo::chia(PhanSo ps)
{
	PhanSo p;
	p.tu = tu * ps.mau;
	p.mau = mau * ps.tu;
	p.rutGon();
	return p;
}

void PhanSo::xuat()
{
 	cout << tu << " / " << mau << endl;
}
