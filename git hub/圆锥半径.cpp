#include<iostream>
using namespace std;
int main()
{
	double a = 3.14;
	int r=0;
	cout << "圆锥的半径为：" << endl;
	cin >>r ;
	int h = 0;
	cout << "圆锥的高为：" << endl;
	cin >>h;
	double v;
	v = (1.0/3)*a*pow(r,2)*h;
	cout << "圆锥的体积为" << v << endl;
}