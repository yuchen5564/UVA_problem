// p10222.cpp : This file contains the 'main' function. Program execution begins and ends there.
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=14&page=show_problem&problem=1163


#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    char alphabet[] = { 'd','m','b','g','t','h','j','k','p',
        'l',';','\'','.',',','[',']','e','y','f','u','o','n','r','v','i','c' };
    int len = str.length();

    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 26; j++) {
            if (str[i] == alphabet[j]) {
                str[i] = j + 97; 
                break;
            }
        }
    }
    cout << str << endl;
}

