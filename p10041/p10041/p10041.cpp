// p10041.cpp : This file contains the 'main' function. Program execution begins and ends there.
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=982

#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;



int main()
{
    int n = 0;
    cin >> n;   //資料筆數
    for (int i = 0; i < n; i++) {
        int a = 0;
        cin >> a;   //門牌數
        int arr[500] = { 0 };
        for (int j = 0; j < a; j++) {   //Input
            cin >> arr[j];
        }
        sort(arr, arr + a);     //排序
        //int arr1[500] = { 0 };
        //arr1[0] = arr[0];
        int mid = a/2;
         /*int c = 1;  //去除重複之後個數
        for (int j = 1; j < a; j++) {
            if (arr[j] != arr[j - 1]) {
                arr1[c] = arr[j];
                c++;
            }
        }
        cout << c << endl;
       
       int index = c / 2;
        if (c % 2 == 0) {
            mid = (arr1[index] + arr1[index + 1]) / 2;
        }
        else {
            mid = arr1[index];
        }
        cout << mid << endl;
        for (int j = 0; j < c; j++) {
            cout << arr1[j] << " ";
        }
        cout << endl;*/
        int sum = 0;
        for (int j = 0; j < a; j++) {
            sum += abs(arr[j] - arr[mid]);
        }
        cout << sum << endl;
    }

}
