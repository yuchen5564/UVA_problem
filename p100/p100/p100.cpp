// p100.cpp : This file contains the 'main' function. Program execution begins and ends there.
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=3&page=show_problem&problem=36


#include <iostream>
using namespace std;
int count(int n) {
    int cc = 1;
    while (n != 1) {
        if (n % 2 == 1) {
            n = 3 * n + 1;
            cc += 1;
        }
        else {
            n = n / 2;
            cc += 1;
        }
    }
   
    return cc;
}

int main()
{
    int i = 0, j = 0,t = 0;
    while (cin >> i >> j) {
        cout << i << " " << j << " ";
        if (j < i) {
            t = j;
            j = i;
            i = t;
        }
        int max = 0, n = 0;
        n = i;
        for (; n <= j; n++) {
            if (count(n) > max) {
                max = count(n);
            }
        }
        cout << max << endl;
    }
    
    
}