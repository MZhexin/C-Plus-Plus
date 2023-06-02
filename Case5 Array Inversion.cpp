// 案例5：数组逆置，使值为1、2、3、4、5的数组转变成5、4、3、2、1

/*
    思路：从两头分别向中心逼近，交换开头和结尾，换完之后，更新头尾
*/

#include <iostream>
using namespace std;

int main()
{
    // 初始化
    int array[5] = {1, 2, 3, 4, 5};          // 定义数组
    int lens = sizeof(array) / sizeof(int);  // 计算数组长度
    int start = 0;                           // 设置首元素下标为0
    int end = lens - 1;                      // 设置尾元素下标为数组的最后一个
    int temp = 0;                            // 临时的中间变量

    // 打印逆置前的数组array
    for(int i = 0; i < lens; i++)
    {
        cout << "逆置前，数组array的第" << i << "个元素是：" << array[i] << endl;
    }
    cout << endl;

    // 逆置
    for(int i = 0; i < lens; i++)
    {
        // 交换首尾元素
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        // 更新首尾元素的索引
        start++;
        end--;
    }

    // 打印逆置后的数组array
    for(int i = 0; i < lens; i++)
    {
        cout << "逆置后，数组array的第" << i << "个元素是：" << array[i] << endl;
    }

    system("pause");
    return 0;
}
