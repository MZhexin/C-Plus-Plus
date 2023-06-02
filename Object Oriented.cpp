// 面向对象编程 ————> 类和对象

#include <iostream>
#include <string>
using namespace std;

#define PI 3.14

/*
    C++面向对象编程的三大特性：封装、继承、多态
*/

// 圆类
class Circle
{   
    
    public: // 访问权限

    int radius;  // 属性

    double CalculateCircumference()  // 行为 ——> 用函数表示
    {
        return 2 * PI * radius;
    }
};  // 记得写分号

// 人类
class Person
{
    /*
        设置访问权限（三种）
            1、公共权限 public：    在类内部可以访问，在类外部可以访问
            2、保护权限 protected： 在类内部可以访问，在类外部不可以访问 ————> 在继承时，子类可以访问父类的保护内容
            3、私有权限 private：   在类内部可以访问，在类外部不可以访问 ————> 在继承时，子类不可以访问父类的保护内容
        P.S. struct结构体访问权限默认public，class类访问权限默认private
        P.S. 对于private权限下是属性，可以通过public权限的函数访问
    */
    public: // 人的姓名是公共权限
    string my_name;

    protected:  // 人的车是保护权限
    string my_car;

    private:  // 人的银行卡密码和情人都是私有权限
    string my_credit_card_password;
    string my_lover;

    public:  // 对于private权限下是属性，可以通过public权限的函数访问
    void SetLover(string lover)  // 设置情人
    {
        my_lover = lover;
    }

    string GetLover()  // 获取情人
    {
        return my_lover;
    }
};

int main()
{   
    // 1、类与对象的基本操作
    Circle c1;  // 实例化对象
    c1.radius = 10;  // 给属性赋值
    cout << "圆c1的周长为：" << c1.CalculateCircumference() << endl;  // 调用行为函数

    // 2、通过public函数访问private属性
    Person p1;
    p1.SetLover("苍井空");
    cout << "人p1的情人是：" << p1.GetLover() << endl;

    system("pause");
    return 0;
}
