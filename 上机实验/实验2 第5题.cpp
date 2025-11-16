#include <iostream>
#include <string>
using namespace std;
int main()
{
		cout << "请输入一行字符（以转换符结尾）:";
		string line;
		if (!getline(cin, line)) return 0;
		int letters = 0, digits = 0, spaces = 0, others = 0;
		for (unsigned char ch : line) {
				if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
						letters++;
				else if (ch == ' ')
						spaces++;
				else if (ch >= '0' && ch <= '9')
						digits++;
				else
						others++;
		}
		cout << "该行字符中英文字母有:" << letters<<endl;
		cout << "该行字符中数字有:" << digits << endl;
		cout << "该行字符中空格有:" << spaces << endl;
		cout << "该行字符中其他类型字符有:" << others << endl;






		system("pause");

		return 0;

}