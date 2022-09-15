//
//  main.cpp
//  水仙花数
//
//  Created by 顾淼 on 2022/9/15.
//

#include <iostream>
using namespace std;
int main()
{
    int num=100;
    do{
        int a;//个位
        int b;//十位
        int c;//百位
        a = num % 10;
        b = num / 10 %10;
        c = num / 100;
        if(a*a*a + b*b*b + c*c*c == num)//如果是水仙花数打印
        {
        cout<<num<<endl;
        }
        num++;
    }while(num<=999);
    //先打印所有三位数
    return 0;
}
