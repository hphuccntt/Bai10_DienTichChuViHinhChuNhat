#include <iostream>
using namespace std;
int main()
{
	cout << "Tinh dien tich chu vi HCN\n";
	double chuvi, dientich, dai, rong;
	cout << "chieu dai:"; cin >> dai;
	cout << "chieu rong:"; cin >> rong;
	chuvi = (dai + rong) * 2;
	dientich = dai * rong;
	cout << "chuvi:" << chuvi<< endl;
	cout << "dientich:" << dientich<< endl;
	return 0;


}