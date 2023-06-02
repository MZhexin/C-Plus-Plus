// 案例1：三只小猪称体重（假设三只小猪体重都不一样）
#include<iostream>
using namespace std;

// 定义体重比较函数Compare_Weight()
void CompareWeight(float weight[])
{
    // 初始化变量值
    int i, heaviest = 0;  // i为循环变量，heaviest为最重小猪的编号
    float heaviest_weight = 0;  // 最重小猪的体重

    // 通过for循环，依次比较当前小猪和排在前面的最重小猪，哪一个更重
    for(i = 0; i < 3; i++)
    {   
        // 如果当前小猪比排在自己前面几只小猪中最重的还要重，则最重小猪的编号易主
        if(weight[i] > heaviest_weight)
        {
            heaviest_weight = weight[i];
            heaviest = i;
        }
    }

    // 由于编号从1开始，而索引从0开始，所以heaviest需要加一
    cout << "最重的小猪是第" << heaviest + 1 << "只。";
}

int main()
{
    float weight[3];  // 定义数组，存放三只小猪的体重

    // 通过for循环，依次输入第i只小猪的体重
    for(int i = 0; i < 3; i++)
    {
        cout << "请输入第" << i + 1 << "只小猪的体重（单位：千克）：" << endl;
        cin >> weight[i];
        cout << "第" << i + 1 << "只小猪的体重是" << weight[i] << "千克。" << endl;
    }

    // 调用Compare_Weight()函数，比较并返回哪一只小猪最重
    CompareWeight(weight);

    system("pause");
    return 0;
}