#include<iostream>
using namespace std;
int gcd(int x, int y)
{
		while (y != 0) {
				int temp = y;
				y = x % y;
				x = temp;
		}
				return x;
		
}
		
int main ()
{
		int a, b;
		cout << "请输入两个数：";
		cin >> a >> b;
		cout << "这两个数的最大公约数为：" << gcd(a, b) << endl;
		cout << "这两个数的最小公倍数是：" << a * b / gcd(a, b) << endl;
		system("pause");

		return 0;


}
