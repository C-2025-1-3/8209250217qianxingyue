#include<iostream>
using namespace std;
int main()
{
		char c;
		cout << "请输入一个英文字母：";
		cin >> c;
		if (c >= 'a' && c <= 'z')
		{
				cout <<"转换后的大写字母为：" << char (c -32) << endl;
		}
		else if (c >= 'A' && c <= 'Z')
		{
				cout <<"其下一位的ASCII码为：" << c + 1 << endl;
		}



		system("pause");


		return 0;


}