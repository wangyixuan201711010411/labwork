//example2_05.cpp:局部变量随用随定义及作用域问题示例
#include<iostream>
#include<iomanip>
using namespace std;//使用C++标准命名空间
int main()
{
    int arr[3]={0},i=123;//定义第1个局部变量i，作用域不含第2个i所在域
    cout<<"i="<<i<<endl;//输出第1个i的值为123
    {//该语句框内，有同名的局部变量i，则第一个i无作用
        for(int i=0;i<2;i++)//定义第二个局部变量i，作用域仅限于该语句块
            arr[i]=(i+5)*10+3;
        cout<<"i="<<i<<endl;//输出第2个局部变量i的值2，第1个i不起作用
        arr[2]++;
        cout<<"i="<<i<<endl;//输出第2个局部变量i的值2，第一个i不起作用
    }//第2个局部变量i的作用域到此结束
    cout<<"i="<<i<<endl;//输出的为第1个i的值123
    int sum=0;//定义局部变量sum，随用随定义
    for(i=0;i<3;i++)//第1个i在起作用
        sum+=arr[i];//求3个元素之和
    cout<<"i="<<i<<endl;//输出的为第1个i的值3
    for(i=0;i<3;i++)//第1个i作为循环控制变量
        cout<<setw(4)<<arr[i];//setw控制格式，后面按每个元素占4列输出
    cout<<endl;
    cout<<"i="<<i<<",sum"<<sum<<endl;//输出第1个i的值3及sum的值117
    return 0;
}
