// 函数的传参

#include <iostream>
using namespace std;

// 值传递：形参不修饰实参
void PassByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// 地址传递：形参修饰实参
void PassByAddress(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 引用传递：形参修饰实参，且函数中不用指针，大幅度简化函数的书写过程
/* 
    P.S. 当引用作为函数的返回值时：
    1、不要返回局部变量的引用；
    2、函数的调用可以作为左值。
*/
void PassByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;
    cout << "a = " << a << "， b = " << b << endl;

    PassByValue(a, b);
    cout << "a = " << a << "， b = " << b << endl;

    PassByAddress(&a, &b);
    cout << "a = " << a << "， b = " << b << endl;

    PassByReference(a, b);
    cout << "a = " << a << "， b = " << b << endl;

    system("pause");
    return 0;
}