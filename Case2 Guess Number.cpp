// 案例2：猜数字
#include <iostream>
using namespace std;

int main()
{

    // 生成一个 1 ~ 100 之间的随机数
    int rand_number = rand() % 100 + 1;  // rand() % n 可以生成 0 ~ n-1 之间的随机数
    // 定义变量，用来表示用户猜测的数字
    int user_guess_value = 0;

    // 用户开始猜测
    cout << "请输入您猜测的数字：" << endl;
    cin >> user_guess_value;

    // 如果用户猜错，则进入循环
    while (user_guess_value != rand_number)
    {   
        // switch()语句判断用户猜大了还是猜小了
        // while循环已经判断过用户猜测的数字是否与生成随机数相等，因此这里不用再考虑相等的情况
        switch (user_guess_value > rand_number)
        {
            case 1: cout << "您猜大了，需要再小些。" << endl;
                    break;

            case 0: cout << "您猜小了，需要再大些。" << endl;
                    break;
        }

        // 在每轮循环里，用户都需要再猜一次
        cout << "请重新输入您猜测的数字：" << endl;
        cin >> user_guess_value;
    }
    
    cout << "恭喜您猜对了！" << endl;

    system("pause");
    return 0;
}