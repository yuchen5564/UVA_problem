// p10008.cpp : This file contains the 'main' function. Program execution begins and ends there.
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=949


#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int n = 0;
    string str = {};
    map<char, int>alphabet;
    cin >> n;
    getline(cin, str);
    for (int i = 0; i < n; i++) {
        getline(cin, str);
        int len = 0;
        len = str.length();
       // cout << len << endl;
        for (int j = 0; j < len; j++) {
            if (str[j] >= 'a' && str[j] <= 'z') {
                str[j] -= 32;
                alphabet[str[j]]++;
            }
            else if (str[j] >= 'A' && str[j] <= 'Z') {
                alphabet[str[j]]++;
            }
        }
    }


    for (auto i : alphabet) {
        cout << i.first << " " << i.second << endl;
    }
    
    return 0;
}

