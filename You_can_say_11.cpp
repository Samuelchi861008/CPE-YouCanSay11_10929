/* **************************************************************************

    * File Name : You_can_say_11.cpp

    * Creation Date : 2018-08-30 14:49:09

    * Last Modified : 2018-08-31 10:29:34

    * Created By : Samuel Chi <Yu-Ning Chi>

************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str; //輸入數字以字串儲存
    int sumOfOdd, sumOfEven; //數字中奇數數字加總、偶數數字加總
    
    while(cin >> str)
    {
        if(str == "0") //若輸入字串若為0則結束
            break;
        sumOfOdd = sumOfEven = 0; //同時初始化兩變數
        for(int i = 0; i < str.length(); i++)
            if(i % 2 == 0) //因為將使用陣列，故陣列起始為0
                sumOfOdd += str[i] - '0'; //因此若為奇數則加總至sumOfOdd
            else //若為偶數則加總至sumOfEven
                sumOfEven += str[i] - '0';
        if((sumOfOdd - sumOfEven) % 11 == 0) //若奇數加總減偶數加總等於11倍數
            cout << str << " is a multiple of 11.\n"; //則該數為11的倍數
        else //反之，則不為11的倍數
            cout << str << " is not a multiple of 11.\n";
    }
    return 0;
}
