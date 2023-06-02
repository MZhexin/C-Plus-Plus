// 点和圆的关系

#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    // 定义坐标
    private:
    int x_coordinate;
    int y_coordinate;

    public:
    // 设置点的X、Y坐标
    void SetX(int x)
    {
        x_coordinate = x;
    }

    void SetY(int y)
    {
        y_coordinate = y;
    }

    // 获取点的X、Y坐标
    int GetX()
    {
        return x_coordinate;
    }

    int GetY()
    {
        return y_coordinate;
    }
};

class Circle
{
    private:
    int radius;
    Point circle_center;

    public:
    void SetRadius(int r)
    {
        radius = r;
    }

    void SetCenter(Point c)
    {
        circle_center = c;
    }

    int GetRadius()
    {
        return radius;
    }

    Point GetCenter()
    {
        return circle_center;
    }

    void Campare(Point p)
    {   
        // 计算点到圆心距离
        int delt_x = p.GetX() - circle_center.GetX();
        int delt_y = p.GetY() - circle_center.GetY();
        int r = sqrt(pow(delt_x, 2) + pow(delt_y, 2));

        // 判断
        if(r < radius)
        {
            cout << "点在圆内" << endl;
        }
        else if(r == radius)
        {
            cout << "点在圆上" << endl;
        }
        else if(r > radius)
        {
            cout << "点在圆外" << endl;
        }
    }
};

int main()
{
    Point p;
    Point cc;
    Circle c;

    // 设置点坐标
    p.SetX(3);
    p.SetY(4);

    // 设置圆心
    cc.SetX(0);
    cc.SetY(0);
    c.SetCenter(cc);

    // 设置圆半径
    c.SetRadius(5);

    c.Campare(p);

    system("pause");
    return 0;
}