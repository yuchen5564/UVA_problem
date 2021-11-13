// p10929.cpp : This file contains the 'main' function. Program execution begins and ends there.
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=21&page=show_problem&problem=1870

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	string num = "";
	while (cin >> num) {
		if (num == "0") {
			return 0;
		}
		int odd = 0, even = 0;
		for (int i = 0; i < num.length(); i++) {
			if (i % 2 == 0) {
				even += (num[i] - '0');
			}
			else {
				odd += (num[i] - '0');
			}

		}
		if (abs(odd - even) % 11 == 0) {
			cout << num << " is a multiple of 11." << endl;
		}
		else {
			cout << num << " is not a multiple of 11." << endl;
		}

	}
	
	
}

