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
    //map<char, int>alphabet;
    int alphabet[26] = { 0 };
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
                alphabet[str[j]-65]++;
            }
            else if (str[j] >= 'A' && str[j] <= 'Z') {
                alphabet[str[j]-65]++;
            }
        }
    }
    /*for (int i = 0; i < 26; i++) {
        cout << alphabet[i] << " ";
    }*/
    //cout << endl;
    int max = 0;
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] > max) {
            max = alphabet[i];
        }
    }
    //cout << max << endl;
    for (int i = max; i > 0;i--) {
        for (int j = 0; j < 26;j++) {
            if (alphabet[j] == i) {
                cout << char(j + 65) << " " << alphabet[j] << endl;
            }
        }
    }
    
    /*for (auto i : alphabet) {
        cout << i.first << " " << i.second << endl;
    }*/
    
    return 0;
}

