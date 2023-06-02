// 函数占位符

#include <iostream>
using namespace std;

// 目前的学习阶段还用不到占位符，要等后续课程再补充
// 占位参数可以设置成默认值
void func(int a, int = 10)
{
    cout << "This is a function." << endl;
}

int main()
{
    func(10);

    system("pause");
    return 0;
}
