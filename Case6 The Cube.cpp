// 计算立方体的表面积和体积，并使用全局函数和成员函数判断两个立方体是否相同

#include <iostream>
using namespace std;

class Cube
{
    private:  // 定义私有属性长、宽、高
    int length;
    int width;
    int height;

    public:  // 公共行为：设置长宽高、计算表面积和体积
    // 设置长
    void SetLength(int l)
    {
        length = l;
    }

    // 设置宽
    void SetWidth(int w)
    {
        width = w;
    }

    // 设置高
    void SetHeight(int h)
    {
        height = h;
    }

    // 获取长
    int GetLength()
    {
        return length;
    }

    // 获取宽
    int GetWidth()
    {
        return width;
    }

    // 获取高
    int GetHeight()
    {
        return height;
    }
    
    // 计算表面积
    int CalculateSquare()
    {
        return 2 * (length * width + width * height + height * length);
    }

    // 计算体积
    int CalculateVolume()
    {
        return length * width * height;
    }

    bool IfSameByClass(Cube &another_cube)
    {
        if(length == another_cube.GetLength() && width == another_cube.GetWidth() && height == another_cube.GetHeight())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

bool IfSame(Cube c1, Cube c2)
{
    if(c1.GetLength() == c2.GetLength() && c1.GetWidth() == c2.GetWidth() && c1.GetHeight() == c2.GetHeight())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Cube c1;
    c1.SetLength(5);
    c1.SetWidth(10);
    c1.SetHeight(20);
    cout << "立方体c1的长为"<< c1.GetLength() << "，宽为" << c1.GetWidth() << "，高为" << c1.GetHeight() << endl;
    cout << "计算立方体c1的表面积为" << c1.CalculateSquare() << "，计算立方体c1的体积为" << c1.CalculateVolume() << endl;

    Cube c2;
    c2.SetLength(5);
    c2.SetWidth(10);
    c2.SetHeight(20);

    // 利用全局函数判断立方体是否相同
    if(IfSame(c1, c2) == true)
    {
        cout << "立方体c1和立方体c2一样" << endl;
    }
    else
    {
        cout << "立方体c1和立方体c2不一样" << endl;
    }

    // 利用成员函数判断立方体是否相同
    if(c1.IfSameByClass(c2) == true)
    {
        cout << "立方体c1和立方体c2一样" << endl;
    }
    else
    {
        cout << "立方体c1和立方体c2不一样" << endl;
    }

    system("pause");
    return 0;
}
