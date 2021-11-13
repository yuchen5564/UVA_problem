// p10420.cpp : This file contains the 'main' function. Program execution begins and ends there.
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=16&page=show_problem&problem=1361


#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <map>
using namespace std;

int main()
{
	int n = 0;
	string str = {};
	cin >> n;
	map<string, int> country;
	getline(cin, str);//讀入整行空白
	for (int i = 0; i < n; i++) {
		getline(cin, str);
		int s = str.find_first_of(" ", 0);
		str = str.substr(0, s);
		country[str]++;
	}
	for (const auto& s : country) {
		cout << s.first << " " << s.second << endl;
	}
}

