//example2_11.cpp:用引用作参数修改对应实际参数变量的值
#include<iostream>
using namespace std;
void swap(int &x,int &y)//调用之初参数传递就使得引用参数成为本次调用实际参数变量的别名
{
    int t=x;//引用的x和y分别是两个实际参数变量的别名，实现了实际参数变量值的互换
    x=y;
    y=t;
}
int main()
{
    int a=3,b=5,c=10,d=20;
    cout<<"a="<<a<<" b="<<b<<endl;//输出交换前的a，b值
    swap(a,b);//调用函数，参数传递相当于执行了int &x=a;int &y=b;使得引用参数获得了初值
    cout<<"a="<<a<<" b="<<b<<endl;//输出交换后的a，b值
    cout<<"c="<<c<<" d="<<d<<endl;//输出交换前的c，d值
    swap(c,d);//
    cout<<"c="<<c<<" d="<<d<<endl;//输出交换后的c，d值
    return 0;
}
