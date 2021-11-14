# UVA_problem 

---  

 Uva解題存檔  
 資料夾名稱為**題目編號**  
 每個資料夾皆為**VS2019專案檔**  
 
---


## 相關連結：
[Uva onlinejudge](https://onlinejudge.org/) 、
[CPE](https://cpe.cse.nsysu.edu.tw/environment.php)、
[Luckya貓 (題目中譯)](http://web.kshs.kh.edu.tw/academy/luckycat/index.htm)

## 目前已完成題目
| 題目編號 | 題目名稱                  | 題目難度(CPE) | 題目重點                         |
|:-------- |:------------------------- |:-------------:|:-------------------------------- |
| p100     | The 3n + 1 problem        |    :star:     |                                  |
| p10035   | Primary Arithmetic        |    :star:     |                                  |
| p10041   | Vito's family             |    :star:     | 排序、找中位數、**不用處理重複** |
| p10055   | Hashmat the brave warrior |    :star:     | 大數相減                         |
| p10101   | Bangla Numbers            |    :star:     | 遞迴、找尋規律                   |
| p10420   | List of Conquests         |    :star:     | map、getline                     |
| p10929   | You can say 11            |    :star:     | 找11倍數                         |
| p10008   | What's Cryptanalysis?     |    :star:     | **不能用map排序**、計數完後找出最大值、輸出|

## 尚在研究方法中...
| 題目編號 | 題目名稱              | 卡關部分          |   參考資料  |
|:-------- |:--------------------- |:----------------- | --- |


## C++常用函式庫
| 函式庫名稱 | 函數                                 | 功能                                             | 範例                      |
|:---------- |:------------------------------------ |:------------------------------------------------ |:------------------------- |
| algorithm  | sort(陣列起始, 陣列結束)             | 快速排序陣列                                     | sort(a, a+10)             |
| string     | 字串.find_first_of(尋找元素, 起始點) | 尋找元素在字串中第一個出現的位置(可用於分割字串) | str.find_first_of(" ", 0) |
| string     | 字串.substr(起始點, 數量)            | 從起始點以指定數量分割字串                       | str.substr(0, 5)          |
| iostream   | getline(cin,字串)                    | 讀取整行(含空白)                                 | getline(cin, str)         |

## map功能 
```cpp=
#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<string, int> country;    //宣告
    
	for (const auto& s : country) {    //輸出
		cout << s.first << " " << s.second << endl;
	}
}

```
