// 案例3：求出所有三位数中的水仙花数————>要求使用do-while循环

#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    // 100开始
    int num = 100;

    do
    {
        int unit = num % 10;           // 获取个位
        int decade = num / 10 % 10;     // 获取十位
        int hundreds = num / 100;       // 获取百位

        int result = pow(unit, 3) + pow(decade, 3) + pow(hundreds, 3);  // 计算水仙花数的公式

        // 判断是否满足水仙花数的条件
        if(result == num)
        {
            cout << num << endl;  // 输出
        }

        num++;  // 判断下一个数

    }while(num < 1000);  // 保证是三位数

    system("pause");
    return 0;
}
