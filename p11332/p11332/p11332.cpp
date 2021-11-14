// p11332.cpp : This file contains the 'main' function. Program execution begins and ends there.
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=25&page=show_problem&problem=2307


#include <iostream>
using namespace std;

int count(long long n) {
    int sum = 0;
    if (n < 10) {
        return n;
    }
    else {
        while (n > 0) {
            sum += n % 10;
            n = n / 10;
        }
        if (sum >= 10) {
            return count(sum);
        }
        else {
            return sum;
        }
    }
}

int main()
{
    long long num = 0;
    while (cin >> num) {
        if (num == 0) {
            return 0;
        }
        cout << count(num) << endl;
    }   
}

