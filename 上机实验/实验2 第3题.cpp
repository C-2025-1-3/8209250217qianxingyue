#include<iostream>
using namespace std;
int main()
{
		float a, b, c;
		cout << "请输入三角形的三条边：";
		cin >> a >> b >> c;
		if (a + b > c || a + c > b || b + c > a)
		{
				if (a == b || a == c || b == c)
				{
						cout << "该三角形是等腰三角形，它的周长为：" << a + b + c << endl;
				}
				else cout << "该三角形的周长为："<<a+b+c << endl;

		}
		else
				cout << "你输入的三条边不能构成三角形" << endl;


		system("pause");

		return 0;
}