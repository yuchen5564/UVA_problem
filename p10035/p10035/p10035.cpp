// p10035.cpp : This file contains the 'main' function. Program execution begins and ends there.
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=976

#include <iostream>
using namespace std;

int main()
{
	long long a = 0, b = 0;
	int c = 0;
	int flag = 0;
	
	
	while (cin >> a >> b) {
		if (a == 0 && b == 0) {
			return 0;
		}
		else {
			int a1[10] = { 0 }, b1[10] = { 0 };
			flag = 0;
			c = 0;
			while (a > 0) {
				a1[c] = a % 10;
				a = a / 10;
				c++;
			}
			c = 0;
			while (b > 0) {
				b1[c] = b % 10;
				b = b / 10;
				c++;
			}

			for (int i = 0; i < 10; i++) {
				if (a1[i] + b1[i] >= 10) {
					flag++;
					a1[i + 1]++;
				}
			}
			if (flag == 0) {
				cout << "No carry operation." << endl;
			}
			else if (flag == 1) {
				cout << "1 carry operation." << endl;
			}
			else {
				cout << flag << " carry operations." << endl;
			}

		}
	}

}

