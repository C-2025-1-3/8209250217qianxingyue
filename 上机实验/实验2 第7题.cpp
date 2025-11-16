#include<iostream>
using namespace std;
int main()
{
		int i;
		for (i = 1; i < 6; i++)
		{
				for (int j = 1; j <= i; j++){
						cout << "*";
				}
				cout << endl;
		}
		system("pause");
		return 0;
}
