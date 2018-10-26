#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	
	float a, b;
	
	double ketQua;
	char ope;
	char chon;
	while (true)
	{
		cout << "Nhap so thu nhat, dau, so thu 2: ";
		cin >> a >> ope >> b;
	
		switch(ope)
		{
			case '+':
				ketQua = a+b;
				cout << "Dap an cua ban la: " << ketQua;
				break;
			case '-':
				ketQua = a-b;
				cout << "Dap an cua ban la: " << ketQua;
				break;
			case '*':
				ketQua = a*b;
				cout << "Dap an cua ban la: " << ketQua;
				break;
			case '/':
				ketQua = a/b;
				cout << "Dap an cua ban la: " << ketQua;
				break;
			defauft:
				cout << "Dau cua ban khong hop le vui long kiem tra lai!";
		}
		deptrai:
		cout << "\nBan co muon lam tiep khong? (y/n)";
		cin >> chon;
		if(chon == 'n')
		{
			break;
		}
		else if (chon != 'y')
		{
			cout << "\nKi tu khong hop le!";
			goto deptrai;
		}
	}
	return 0;
}
