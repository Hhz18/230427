//#include<iostream>
//using namespace std;
//int main()
//{
//
//	cout << "int length" << sizeof(int) << endl;
//	cout << "long  length" << sizeof(long) << endl;
//	cout << "long long length" << sizeof(long long) << endl;
//    cout << " char length" << sizeof(char) << endl;
//	cout << "bool length:" << sizeof(bool) << endl;
//	cout << "float length:" << sizeof(float) << endl;
//	cout << "double length:" << sizeof(double) << endl;
//
//}
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type: "<< oct<< testUnint<< endl;//<<oct;
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//Ϊʲô���Ϊ-2?:
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16�������
	system("pause");
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	float a = 0;
	cout << "�����뻪���¶ȣ�" << endl;
	cin>>a;
	float b;
	b = (a - 32) /1.8;
	cout << "����Ļ����¶�ת��Ϊ�����¶�Ϊ��" << b << endl;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int A=0;
	int a;
	cout << "������һ����ĸa��" << endl;
	cin >> a;
	if(isupper(A))
	{
		cout << 65<< endl;
	}
	else { cout << A << endl; }
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	double x=0;
	double y=0;
	for (i = 0; i < 9; i++)
	{
		cout << "��Ϊx����һ�����֣�" << endl;
		cin >> x;
		if (0 < x && x < 1)
		{
			y = 3 - 2 * x;
			cout << "y=" << y<< endl;
		}
		else if (1 <= x && x < 5)
		{
			y = 2 / (4 * x) + 1;
			cout << "y=" << y << endl;
		}
		else if (5 <= x && x < 10)
		{
			y = x * x;
			cout << "y=" << y << endl;
		}
	}


	
	
}
*/
//3.
/*
#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "���������������߳���" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b <= c || a + c <= b || b + c <= a || a - c >= b || a - b >= c || b - c >= a || c - a >= b || b - a >= c || c - b >= a)
	{
		cout << "��Ǹ�޷�����������" << endl;
	}
     else if (a == b || a == c || b == c)
	{
		cout << "��������Ϊ����������" << endl;
		cout << "�������ܳ�Ϊ��" << a + b + c << endl;
	}
	 else {
		cout << "�������β��ǵ���������" << endl;
		cout << "�������ܳ�Ϊ��" << a + b + c << endl;
	}	
}
*/
//4.
/*
#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0;
	cout << "������a,b��ֵ��" << endl;
	cin >> a;
	cin >> b;
	if (a == 0 &&b!=0)
	{
		cout << "b/a�������" << endl;
	}
	else if (a != 0 && b == 0)
	{
		cout << "a/b�������" << endl;
	}
	else 
	{
		cout << "������a+b=" << a + b << endl;
		cout << "������a-b=" << a - b << endl;
		cout << "������a*b=" << a * b << endl;
		cout << "a/b=" << a / b << endl;
		cout << "ȡ��a%b="   << a % b << endl;
		cout << "������Ƿ�:" << "axb" << endl;
	}
}
*/
//5
/*
#include<iostream>
using namespace std;
int main()
{
	char c;
	int letters = 0;
	int spaces = 0;
	int numbers = 0;
	int others = 0;
	while ((c = getchar()) != '\n') {
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'z') {
			letters++;
		}
		else if (c == ' ') {
			spaces++;
		}
		else if (c >= '0' && c <= '9') {
			numbers++;
		}
		else {
			others++;
		}
	}
	printf("letters=%d,space=%d,numbers=%d,others=%d", letters, spaces, numbers,others);
}
*/
//6
/*
#include<iostream>
using namespace std;
int main()
{
	int m;
	int n;
	int temp;
	int num1;
	int num2;
	scanf("%d %d", &m, &n);
	num1 = m;
	num2 = n;
	if (num1 >= num2) {
		while (n != 0) {
			temp = m % n;
			m = n;
			n = temp;
		}
		printf("���Լ��Ϊ��%d", m);
		printf("��С������Ϊ��%d", num1 * num2 / m);
	}
	else if (num1 < num2) {
		while (m != 0) {
			temp = n % m;
			n = m;
			m = temp;
		}
		printf("���Լ��Ϊ��%d\n", n);
		printf("��С������Ϊ��%d", num1 * num2 / n);
	}
}
*/
//7
#include<iostream>
using namespace std;
int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int k = 5; k > 0; k--)
		{
			cout << "*" ;
		}


	}

	return 0;
} 