// p10055.cpp : This file contains the 'main' function. Program execution begins and ends there.
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=996

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int a = 0, b = 0, c = 0;
    while (cin>>a>>b) {
        c = abs(a - b);
        cout << c << endl;
    }
}