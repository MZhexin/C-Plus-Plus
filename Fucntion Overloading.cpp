// 函数重载

#include <iostream>
using namespace std;

/*
    函数重载：函数名可以相同，提高复用性
    需要满足的条件：
        1、在同一个作用域下；
        2、函数名称相同；
        3、函数参数类型不同，或者个数不同，或者顺序不同
        4、注意：函数的返回值不可以作为函数重载的条件 ————> e.g. int func(int a) 和 void func(int a) 不发生重载
*/

void func()
{
    cout << "这是第1个func函数" << endl;
}

void func(int a)
{
    cout << "这是第2个func函数" << endl;
}

void func(double b)
{
    cout << "这是第3个func函数" << endl;
}

void func(int a, double b)
{
    cout << "这是第4个func函数" << endl;
}

void func(double b, int a)
{
    cout << "这是第5个func函数" << endl;
}

int main()
{   
    // 以下五个函数，函数名都一样，但输出结果不一样
    func();         // 调用第一个func函数 ————> 一和二的参数个数不同
    func(10);       // 调用第二个func函数 ————> 二和三的参数类型不同
    func(0.5);      // 调用第三个func函数
    func(10, 0.5);  // 调用第四个func函数 ————> 五和六的参数顺序不同
    func(0.5, 10);  // 调用第五个func函数

    // 函数重载时尽量避免使用默认参数

    system("pause");
    return 0;
}
