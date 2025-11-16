#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
		float F, C;
		cout << "请输入华氏温度：";
		cin >> F;
		cout << "对应的华氏温度为：" <<setprecision(4)<< (F - 32) * 5 / 9 << endl;




		system("pause");


		return 0;




}