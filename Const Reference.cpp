// 常量引用

#include <iostream>
using namespace std;

// 常量引用的作用：修饰形参，防止误操作

void Print(const int &a)  // 这里用const修饰a的引用，防止函数Print中误修改a的值，导致函数外的a也被修改 ————> 好习惯，要养成这个习惯
{
    cout << "a = " << a << endl;
}

int main()
{
    int a = 10;
    Print(a);

    system("pause");
    return 0;
}
