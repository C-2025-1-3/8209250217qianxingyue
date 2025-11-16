#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
		double a;
		cout << "输入你所要求平方根的数：";
		cin >> a;
		if (a < 0){
				cout << "a的平方根在实数范围内不存在，若考虑复数，其平方根为:(+-)" << sqrt(-a)
				<< "i" << endl;
		return 0;
}
		double x = a;
		double y;
		const double z = 1e-5;
		do {
				y = (x + a/ x) / 2;
				double diff = fabs(y - x);//绝对值的表示
				x = y;
		} while (fabs(y - x)>=z);
		cout << fixed << setprecision(6);
		cout << "a的平方根为：" << x << endl;
		



		system("pause");

		return 0;
}