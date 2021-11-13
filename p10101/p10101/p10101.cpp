// p10101.cpp : This file contains the 'main' function. Program execution begins and ends there.
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=13&page=show_problem&problem=1042

#include <iostream>
#include <iomanip>
using namespace std;

void deal(long long n) {
	if (n / 10000000 != 0) {
		deal(n / 10000000);
		cout << " kuti";
		n = n % 10000000;
	}
	if (n / 100000 != 0) {
		deal(n / 100000);
		cout << " lakh";
		n = n % 100000;
	}
	if (n / 1000 != 0) {
		deal(n / 1000);
		cout << " hajar";
		n = n % 1000;
	}
	if (n / 100 != 0) {
		deal(n / 100);
		cout << " shata";
		n = n % 100;
	}
	if (n != 0) {
		cout << " " << n;
	}
	
}

int main()
{
	long long num=0;
	int count = 1;
	while (cin >> num) {
		cout << setw(4)<< count << ".";
		deal(num);
		count++;
		if (num == 0) {
			cout << " 0";
		}
		cout << endl;
	}
}
