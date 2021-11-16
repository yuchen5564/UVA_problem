// p10252.cpp : This file contains the 'main' function. Program execution begins and ends there.
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1193


#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string a, b;
    while (1) {
        getline(cin, a);
        getline(cin, b);
        //map<char, int>alphabet;
        int a1[26] = { 0 }, b1[26] = { 0 };
        for (int i = 0; i < a.length(); i++) {
            a1[a[i] - 'a'] = 1;
        }
        for (int i = 0; i < b.length(); i++) {
            b1[b[i] - 'a'] = 1;
        }
        for (int i = 0; i < 26; i++) {
            if (a1[i] == 1 && b1[i] == 1) {
                cout << char(i + 'a');
            }
        }
        //int alphabet[26] = { 0 };
        //for (int i = 0; i < len1; i++) {
        //    for (int j = 0; j < len2; j++) {
        //        if (b[j] == a[i]) {
        //            alphabet[b[j]]++;
        //            //cout << int(b[j])  << endl;
        //        }
        //    }
        //}
        /*for (auto& i : alphabet) {
            cout << i.first;
        }*/
        cout << endl;
    }


    return 0;

}