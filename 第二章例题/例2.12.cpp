//example2_12.cpp:引用参数前面加const修饰符保证对应实际参数变量不能被修改
#include<iostream>
using namespace std;
int Fun(const int &x,int &y,int z)//对第1个实际参数变量保护，只能访问不能修改
{
    x++;//此句若作为函数的语句，则报错，用const限制后只能访问x，不能修改x
    z++;//对值形式参数的修改不会影响对应的实际参数的变量
    y=x+y+z;//通过修改y改变第2个实际参数变量的值
    return y;
}
int main()
{
    int a=1,b=2,c=3,d=0;
    cout<<"a="<<a<< " b="<<b<< " c="<<c<<endl;
    d=Fun(a,b,c);//第1个实际参数和第3个实际参数都不可能被修改
    cout<<"a="<<a<< " b="<<b<< " c="<<c<<endl;
    return 0;
}
