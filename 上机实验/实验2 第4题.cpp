#include<iostream>
using namespace std;
int main()
{//两个数之间的四则运算
		float a, b;
		char op;
		cout << "输入你想计算的式子：";
		cin >> a >> op >> b;
		switch (op)
		{
		case'+':

				cout << "该式子的答案为：" << a + b << endl;
				break;

		case'-':

				cout << "该式子的答案为：" << a - b << endl;
				break;
		case'*':
				cout << "该式子的答案为：" << a * b << endl;
				break;
		case '/':
				if (b != 0)
						cout << "该式子的答案为：" << a / b << endl;
				else
						cout << "除数不能为零，该式子错误！" << endl;
				break;
		default:
				cout << "你输入的计算式本计算器无法计算，运算符非法！" << endl;
				break;

		}


				








		system("pause");


		return 0;
}